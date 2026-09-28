#include <stdio.h>
#include <stdlib.h>
#include <errno.h>   // Essencial para errno e ENOMEM
#include <string.h>  // Essencial para strerror

int main(){
    size_t numeroDeLinhas, numeroDeColunas, i;

    printf("Entre com o numero de linhas e colunas da matriz a ser alocada\n");
    if (scanf("%zu %zu", &numeroDeLinhas, &numeroDeColunas) != 2) {
        return 1;
    }

    float **matriz = NULL; // Ponteiro para ponteiro(s)

    // 1ª etapa: alocação das linhas (vetor de ponteiros)
    matriz = (float **)malloc(numeroDeLinhas * sizeof(float *));
    if (matriz == NULL) {
        puts("Falha na alocacao das linhas.");
        printf("Erro reportado: %s\n", strerror(errno));
        return 1;
    }

    // 2ª etapa: para cada linha, um vetor de tamanho numeroDeColunas é alocado
    for (i = 0; i < numeroDeLinhas; ++i) {
        matriz[i] = (float *)malloc(numeroDeColunas * sizeof(float));
        if (matriz[i] == NULL) {
            printf("Falha na alocacao das colunas para linha %d.\n", i);
            for (int k = 0; k < i; ++k) {
                free(matriz[k]);
            }
            free(matriz);
            return 1;
        }
    }

    // Fazer alguma coisa com a matriz numeroDeLinhas x numeroDeColunas alocada

    // Desalocando a matriz:
    // 1º são desalocados os vetores de cada linha.
    for (i = 0; i < numeroDeLinhas; ++i) {
        free(matriz[i]);
    }

    // Só então é desalocado o vetor de ponteiros.
    free(matriz);
    matriz = NULL;

    return 0;
}