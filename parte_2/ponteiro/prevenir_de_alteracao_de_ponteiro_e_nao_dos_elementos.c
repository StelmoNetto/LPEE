#include <stdio.h>

int main()
{
    int vetor[] = { 3, 4, 5 };

    int * const apenasPtrConstante = vetor; // ponteiro constante

    apenasPtrConstante[0] = 2; // permite alteração dos elementos

    // apenasPtrConstante = NULL; // Erro: não pode alterar o valor do ponteiro

    printf("apenasPtrConstante[0] = %d\n", apenasPtrConstante[0]);

    return 0;
}
