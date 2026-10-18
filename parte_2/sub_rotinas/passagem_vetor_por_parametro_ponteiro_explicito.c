#include <stdio.h>
#define N 3

float lerVetor(float (*ptrParaVetor)[N], size_t n)
{
    printf("Entre com os %d elementos do Vetor\n", n);
    for (size_t i = 0; i < n; i++)
    {
        printf("vetor[%d] = ", i);
        scanf("%f", &(*ptrParaVetor)[i]);
    }
}

float exibirVetor(const float* vetor, size_t n)
{
    printf("[ ");
    for (size_t i = 0; i < n; i++)
        printf("%f ", vetor[i]);
    printf("]");
}

int main()
{
    float dados[N]; //Na pinha

    lerVetor(&dados, N); //Não decai a ponteiro
    exibirVetor(dados, N); //Decai
    return 0;
}
