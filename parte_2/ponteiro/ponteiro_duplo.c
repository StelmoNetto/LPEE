#include <stdio.h>

int main()
{
    int dado = 10;
    int* ponteiroSimples = &dado; //ponteiroSimples aponta para dado
    int** ponteiroDuplo = &ponteiroSimples; //ponteiroDuplo aponta para ponteiroSimples

    printf("&ponteiroSimples = %p\n", ponteiroDuplo);
    printf("&dado = %p\n", *ponteiroDuplo); //O que está em ponteiroSimples
    printf("dado = %d\n", **ponteiroDuplo); //O conteúdo da variável apontada por ponteiroSimples

    return 0;
}