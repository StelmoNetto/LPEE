#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dimensões definidas em tempo de execução
    const int N_CAMADAS = 2, N_LINHAS = 3, N_COLUNAS = 4;

    // DECLARAÇÃO DO PONTEIRO PARA VLA (C99)
    // O parêntese externo (*matriz3D) diz que é um único ponteiro para uma estrutura 2D contígua
    int (*matriz3D)[N_LINHAS][N_COLUNAS];

    // Alocação de um único bloco contíguo de memória
    matriz3D = malloc(N_CAMADAS * sizeof(*matriz3D));
    
    if (matriz3D == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    // Usando a matriz alocada dinamicamente
    int contador = 1;
    for (int camada = 0; camada < N_CAMADAS; camada++) {
        for (int linha = 0; linha < N_LINHAS; linha++) {
            for (int coluna = 0; coluna < N_COLUNAS; coluna++) {
                matriz3D[camada][linha][coluna] = contador++;
            }
        }
    }

    // Acesso direto e limpo usando colchetes normais
    printf("Elemento na Camada 0, Linha 1, Coluna 2 = %d\n", matriz3D[0][1][2]);

    // Liberação de memória simples (apenas um free é necessário)
    free(matriz3D);

    return 0;
}