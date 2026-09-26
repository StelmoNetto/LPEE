#include <stdio.h>

enum { NUMERO_DE_CAMADAS  = 2, NUMERO_DE_LINHAS = 3, NUMERO_DE_COLUNAS = 4 };

int main() {
    //Inicialização Designada
    int matriz3D[NUMERO_DE_CAMADAS][NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {
        [0][0][0] = 100,
        [1][2][1] = 200
    };

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