#include<stdio.h>

int main()
{
    char letra1 = 'c';
    char letra2 = 'A';
    char* ptrParaLetra1 = &letra1;
    char* ptrParaLetra2 = &letra2;

    printf("&letra1 - &letra2 = %d\n\n",&letra1 - &letra2); //1 byte
    
    printf("&letra1 = %p\n",ptrParaLetra1);    
    char* enderecoDeLetra1 = ptrParaLetra2 + 1;
    printf("&letra1 = %p\n",enderecoDeLetra1);
    printf("&letra1 = %p\n\n",++ptrParaLetra2);

    printf("&letra2 = %p\n",&letra2);
    char* enderecoDeLetra2 = ptrParaLetra1 - 1;
    printf("&letra2 = %p\n",enderecoDeLetra2);
    printf("&letra2 = %p\n",--ptrParaLetra1);
}