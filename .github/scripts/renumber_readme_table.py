#!/usr/bin/env python3
from __future__ import annotations

import re
import sys
from pathlib import Path

def split_markdown_row(line: str) -> list[str] | None:
    stripped = line.strip()
    if not stripped.startswith("|") or not stripped.endswith("|"):
        return None
    return [cell.strip() for cell in stripped.strip("|").split("|")]

def is_separator_row(cells: list[str]) -> bool:
    if not cells:
        return False
    return all(re.fullmatch(r":?-{2,}:?", cell) for cell in cells)

def normalize_header(cell: str) -> str:
    return re.sub(r"[*_`\s]", "", cell).casefold()

def renumber_table_in_content(content: str) -> str:
    lines = content.splitlines()
    updated = lines[:]

    index = 0
    while index < len(lines):
        header_cells = split_markdown_row(lines[index])
        if header_cells is None:
            index += 1
            continue

        if index + 1 >= len(lines):
            break

        separator_cells = split_markdown_row(lines[index + 1])
        if separator_cells is None or not is_separator_row(separator_cells):
            index += 1
            continue

        expected_headers = [normalize_header(cell) for cell in header_cells]
        has_numero = any(h in {"nº", "n°", "no", "numero", "número"} for h in expected_headers)

        if not has_numero:
            index += 1
            continue
        
        number_column = next(
            i for i, h in enumerate(expected_headers) if h in {"nº", "n°", "no", "numero", "número"}
        )

        row = index + 2
        counter = 1
        while row < len(lines):
            row_cells = split_markdown_row(lines[row])
            if row_cells is None or is_separator_row(row_cells):
                break

            if number_column < len(row_cells):
                row_cells[number_column] = str(counter)
                updated[row] = "|" + "|".join(row_cells) + "|"
                counter += 1

            row += 1

        index = row

    result = "\n".join(updated)
    if content.endswith("\n"):
        result += "\n"
    return result

def process_file(path: Path) -> bool:
    original = path.read_text(encoding="utf-8")
    updated = renumber_table_in_content(original)

    if updated == original:
        return False

    path.write_text(updated, encoding="utf-8", newline="\n")
    return True

def main() -> int:
    if len(sys.argv) < 2:
        print("Usage: renumber_readme_table.py <file1> [<file2> ...]", file=sys.stderr)
        return 2

    for raw in sys.argv[1:]:
        file_path = Path(raw)
        if file_path.exists():
            if process_file(file_path):
                print(f"Updated: {raw}")
            else:
                print(f"No changes: {raw}")

    return 0

if __name__ == "__main__":
    raise SystemExit(main())
