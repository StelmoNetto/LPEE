#include <stdio.h>

int main() {
    enum {
        NUMERO_DE_LINHAS = 3, 
        NUMERO_DE_COLUNAS = 2
    };
    
    //Inicialização Designada
    int matriz3x2[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {
        [1][0] = -5, //2º linha e 1º coluna
        [0][1] = 16  //1º linha e 2º coluna
    };

    //Inicialização com mistura de Designada com blocos
    int matriz2x3[NUMERO_DE_COLUNAS][NUMERO_DE_LINHAS] = {
        [1] = {-5, 16, 7} //Valores das colunas na 2ª linha
    };
    
    return 0;
}