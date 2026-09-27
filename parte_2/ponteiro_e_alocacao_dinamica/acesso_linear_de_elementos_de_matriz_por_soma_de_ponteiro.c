#include<stdio.h>

#define NUMERO_DE_LINHAS 2
#define NUMERO_DE_COLUNAS 3

int main(){
    char matriz[NUMERO_DE_LINHAS][NUMERO_DE_COLUNAS] = {2,5,4,0,3,1};

    char *ptrParaPrimeiroElemento =  &matriz[0][0];

    printf("matriz[0][0] = %hhd\n", *ptrParaPrimeiroElemento);
    printf("matriz[0][1] = %hhd\n", *(ptrParaPrimeiroElemento + 1));
    printf("matriz[0][2] = %hhd\n", *(ptrParaPrimeiroElemento + 2));

    printf("matriz[1][0] = %hhd\n", *(ptrParaPrimeiroElemento + 3));
    printf("matriz[1][1] = %hhd\n", *(ptrParaPrimeiroElemento + 4));
    printf("matriz[1][2] = %hhd\n", *(ptrParaPrimeiroElemento + 5));
}
