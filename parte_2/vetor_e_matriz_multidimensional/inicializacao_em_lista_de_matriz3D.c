#include <stdio.h>

enum { NUMERO_DE_CAMADAS  = 2, NUMERO_DE_LINHAS = 3, NUMERO_DE_COLUNAS = 4 };

int main() {
    // Inicialização em Lista Linear única - Nota: posições não atribuídas serão 0.
    int matriz3D[NUMERO_DE_CAMADAS][NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] =
    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    //Atribuição na 2ª camada, 1ª linha e 4ª coluna
    matriz3D[1][0][3] = 25;

    // Loops estruturados da dimensão externa para a interna
     for (int camada = 0; camada < NUMERO_DE_CAMADAS; camada++) {
        for (int linha = 0; linha < NUMERO_DE_LINHAS; linha++) {
            for (int coluna = 0; coluna < NUMERO_DE_COLUNAS; coluna++) {
                printf("Matriz3D[%d][%d][%d] = %d ",
                       camada, linha, coluna, matriz3D[camada][linha][coluna]);
            }puts("");
        }puts("");
    }

    return 0;
}