#include <stdio.h>

int main()
{
    int vetor[] = { 3, 4, 5 };

    const int *ptrParaInteirosConstantes = vetor; // Ou: int const *ptrParaInteirosConstantes = vetor;

    // ptrParaInteirosConstantes[0] = 2; // Erro: não pode alterar os elementos do vetor

    printf("ptrParaInteirosConstantes[0] = %d\n", ptrParaInteirosConstantes[0]);

    return 0;
}
