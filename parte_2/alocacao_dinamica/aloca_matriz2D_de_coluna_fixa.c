#include <stdio.h>
#include <stdlib.h>

int main(){
    // Exemplo de alocação dinâmica com número de colunas constante, mas o número de linhas é definido em tempo de execução.

    const size_t NumeroDeColunas = 3;
    size_t numeroDeLinhas;

    printf("Entre com o numero de linhas da matriz a ser alocada\n");
    if (scanf("%zu", &numeroDeLinhas) != 1) {
        return 1;
    }

    // Ponteiro para um vetor de NumeroDeColunas elementos.
    float (*matriz)[NumeroDeColunas] = malloc(numeroDeLinhas * sizeof(*matriz));
    if (matriz == NULL) {
        printf("Falha na alocacao de memoria.\n");
        return 1;
    }

    // Fazer alguma coisa com a matriz numeroDeLinhas x NumeroDeColunas alocada

    // Desalocando a matriz.
    free(matriz);
    matriz = NULL;

    return 0;
}