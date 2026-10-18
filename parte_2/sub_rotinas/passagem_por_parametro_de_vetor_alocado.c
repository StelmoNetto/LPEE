#include <stdio.h>
#include <stdlib.h>

void exibirVetor(const float* vetor, size_t n)
{
    printf("[ ");
    for (size_t i = 0; i < n; ++i)
        printf("%f ", vetor[i]);
    printf("]");
}

int main()
{
    size_t n;

    puts("Entre com o numero de elementos");
    if (scanf("%zu", &n) != 1) return 1;

    float* dados = (float*)malloc(n * sizeof(float));
    if (!dados)
    {
        puts("Erro na alocação do vetor");
        return 1;
    }

    printf("Entre com os %zu elementos do vetor",n);
    for (int i = 0; i < n; ++i)
        scanf("%f", &dados[i]);

    exibirVetor(dados, n);

    free(dados);
    return 0;
}
