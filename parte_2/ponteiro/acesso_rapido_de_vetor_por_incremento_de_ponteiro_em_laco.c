#include<stdio.h>

#define TAMANHO 3

int main(){
    short v[TAMANHO] = {1,4,5};

    printf("&v[0] = %p\n&v[1] = %p\n", &v[0], &v[1]);
    printf("&v[1] - &v[0] = %d\n", &v[1] - &v[0]); //1 short ou 2 bytes

    short* apontaParaElemento0 = v;

    printf("&v[1] = %p\n", apontaParaElemento0 + 1); //Exibe o elemento seguinte ao primeiro

    for(int i = 0; i < TAMANHO; ++i)
        printf("v[%d] = %hd\n", i, *(apontaParaElemento0++));
        //printf("v[%d] = %hd\n", i, *(apontaParaElemento0 + i));
}
