#include <stdio.h>

enum { NUMERO_DE_CAMADAS  = 2, NUMERO_DE_LINHAS = 3, NUMERO_DE_COLUNAS = 4 };

int main() {
    //Inicialização com Chaves Aninhadas
    int matriz3D[NUMERO_DE_CAMADAS][NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = { // Tamanho: 2 * 3 * 4
        { // Camada 0
            {1, 2, 3, 4},       // Linha 0
            {5, 6, 7, 8},       // Linha 1
            {9, 10, 11, 12}     // Linha 2
        },
        { // Camada 1
            {13, 14, 15, 16},   // Linha 0
            {17, 18, 19, 20},   // Linha 1
            {21, 22, 23, 24}    // Linha 2
        }
    };

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