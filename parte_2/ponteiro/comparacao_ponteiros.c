#include <stdio.h>

int main() {
    char letra1 = 'c';
    char letra2 = 'A';

    char* ptrParaLetra1 = &letra1;
    char *ptrParaLetra2 = &letra2;

    if(ptrParaLetra1 < ptrParaLetra2)
        puts("letra1 tem um endereço menor que letra2");
    else
        puts("letra2 tem um endereço menor que letra1");

    //--ptrParaLetra1;

    if(--ptrParaLetra1 == ptrParaLetra2)
        puts("Apontam para o mesmo endereço");

    if(ptrParaLetra1 == NULL)
        puts("Ponteiro está nulo");

    if(ptrParaLetra1) //!= 0 é verdadeiro
        puts("Ponteiro não está nulo");

    return 0;
}
