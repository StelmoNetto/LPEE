#include <stdio.h>
#include <stddef.h>

#define N 3
typedef int Vetor[N];

void escreveVetor(const Vetor vetor)
{
    printf("Vetor de %d elementos\n", N);
    for (size_t i = 0; i < N; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

int main()
{
    int vetor[N] = { 2, 1, 0 };
    int* referenciaParaVetor = vetor; // Aponta para o vetor

    referenciaParaVetor[1] = 3;
    escreveVetor(vetor);
    return 0;
}
