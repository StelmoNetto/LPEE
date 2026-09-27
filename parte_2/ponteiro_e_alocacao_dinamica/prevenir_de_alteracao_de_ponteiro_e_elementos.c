#include <stdio.h>

int main()
{
    int vetor[] = { 3, 4, 5 };

    const int * const ptrConstanteDeConstantesInteiras = vetor;

    // ptrConstanteDeConstantesInteiras = NULL; // Erro: não pode alterar o valor do ponteiro
    // ptrConstanteDeConstantesInteiras[0] = 2; // Erro: não pode alterar os elementos do vetor

    printf("ptrConstanteDeConstantesInteiras[0] = %d\n", ptrConstanteDeConstantesInteiras[0]);

    return 0;
}
