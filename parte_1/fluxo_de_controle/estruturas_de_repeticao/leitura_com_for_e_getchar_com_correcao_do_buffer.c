#include <stdio.h>

int main() {
    for(int x = 0, y = 0; x + y < 10; ++x)
    {
        y = getchar();

        // Se for o Enter, ignora e desfaz o incremento do 'x' se quiser manter o controle exato
        if (y == '\n' || y == '\r' || y == EOF)
        {
            --x; // Ajusta o contador do laço para não contar o Enter como uma tentativa
            continue;
        }

        y = y - '0';
        printf("y = %d\n", y);
    }
    return 0;
}
