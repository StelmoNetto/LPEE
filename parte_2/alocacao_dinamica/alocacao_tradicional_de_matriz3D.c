#include <stdio.h>
#include <stdlib.h>

int main() {
    const int N_CAMADAS = 2, N_LINHAS = 3, N_COLUNAS = 4;

    // 1. Aloca o array de ponteiros duplos (N_CAMADAS)
    int ***matriz3D = malloc(N_CAMADAS * sizeof(int **));
    if (matriz3D == NULL) return 1;

    // 2. Aloca as N_LINHAS para cada Camada
    for (int c = 0; c < N_CAMADAS; c++) {
        matriz3D[c] = malloc(N_LINHAS * sizeof(int *));
        
        // Aloca as N_COLUNAS (os inteiros reais) para cada Linha
        for (int l = 0; l < N_LINHAS; l++) {
            matriz3D[c][l] = malloc(N_COLUNAS * sizeof(int));
        }
    }

    // A sintaxe de acesso com colchetes continua igual
    printf("--- Preenchendo e exibindo inicio da matriz ---\n");
    int contador = 1;

    for (int c = 0; c < N_CAMADAS; c++) {
        for (int l = 0; l < N_LINHAS; l++) {
            for (int col = 0; col < N_COLUNAS; col++) {
                matriz3D[c][l][col] = contador++;
                
                // Exibe apenas alguns elementos para não inundar o terminal
                if (c == 0 && l == 0) {
                    printf("Matriz[%d][%d][%d] = %d\n", c, l, col, matriz3D[c][l][col]);
                }
            }
        }
    }

    // 3. DESALOCAÇÃO: Deve ser feita na ordem inversa da alocação (de dentro para fora)
    for (int c = 0; c < N_CAMADAS; c++) {
        for (int l = 0; l < N_LINHAS; l++) {
            free(matriz3D[c][l]); // Libera as N_COLUNAS
        }
        free(matriz3D[c]); // Libera as N_LINHAS
    }
    free(matriz3D); // Libera as N_CAMADAS

    printf("\nMemoria desalocada com sucesso!\n");
    return 0;
}