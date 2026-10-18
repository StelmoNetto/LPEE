#include <stdio.h>
#include <stdlib.h>

int* alocaVetor3D()
{
    return malloc(3 * sizeof(int));
}

int** alocaMatriz2x2()
{
    int** matriz = (int**)malloc(2 * sizeof(int*));
    if (!matriz) return NULL;

    for (int i = 0; i < 2; i++)
        matriz[i] = (int*)malloc(2 * sizeof(int));

    return matriz;
}

int main()
{
    int* vetor = alocaVetor3D();
    if (vetor) {
        scanf("%d", &vetor[0]);
        free(vetor);
    }

    int** matriz = alocaMatriz2x2();
    if (matriz) {
        matriz[0][1] = 2;

        for (int i = 0; i < 2; i++)
            free(matriz[i]);

        free(matriz);
    }
    return 0;
}