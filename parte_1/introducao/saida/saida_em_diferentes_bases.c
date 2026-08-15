#include <stdio.h>

int main() {
    char c = 'A';     // 'A' é 65 em decimal, 41 em hex, 101 em octal
    short s = 0b1100; // É 12 em decimal, c em hex, 14 em octal
    int i = 345;      // 345 em decimal, 159 em hex, 531 em octal

    // 1. HEXADECIMAL Letras (minúsculas: %x, maiúsculas: %X)
    // O sinalizador '#' adiciona o prefixo '0x' ou '0X'
    printf("--- HEXADECIMAL (Largura 10 com '0x') ---\n");
    printf("Char:      |%#10X\n", c);   // %X deixa hex em maiúsculo
    printf("Short:     |%#010hx\n", s); // Preenchimento de zeros
    printf("Int:       |%-#10x|\n", i); // Alinhado à esquerda

    // 2. OCTAL (%o)
    // '#' adiciona o prefixo '0' se o valor já não for zero
    printf("--- OCTAL (Largura 10 com '0') ---\n");
    printf("Char:      |%10o\n", c);
    printf("Short:     |%#010ho\n", s); // Zeros após o prefixo '0'
    printf("Int:       |%#10o\n", i);

    return 0;
}
