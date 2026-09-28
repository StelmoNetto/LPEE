#include <stdio.h>

int main()
{
    int var = 2;

    // Criando um vetor de ponteiros. Cada elemento é um ponteiro.
    int *vetorDePonteiros[3];

    // Cada posição do vetor aponta para a mesma variável.
    vetorDePonteiros[0] = &var;
    vetorDePonteiros[1] = &var;
    vetorDePonteiros[2] = &var;

    printf("%d %d %d\n", *vetorDePonteiros[0], *vetorDePonteiros[1], *vetorDePonteiros[2]);

    return 0;
}
