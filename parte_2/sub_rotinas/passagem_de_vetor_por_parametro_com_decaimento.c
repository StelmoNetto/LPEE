#include <stdio.h>
#define N 3

float lerVetor(float vetor[])
{
    printf("Entre com os %d elementos do vetor\n", N);
    for (size_t i = 0; i < N; i++)
    {
        printf("vetor[%d] = ", i);
        scanf("%f", &vetor[i]);
    }
}

float exibirVetor(const float vetor[N])
{
    printf("[ ");
    for (size_t i = 0; i < N; i++)
        printf("%f ", vetor[i]);
    printf("]");
}

int main()
{
    float dados[N]; //Na pinha

    lerVetor(dados);
    exibirVetor(dados);
    return 0;
}
