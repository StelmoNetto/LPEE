#include "funcoes_vetoriais.h" //Nosso cabeçalho

void lerVetor(float* vetor, size_t n) //Aponta a qualquer vetor passado por parâmetro
{
    printf("Entre com os %zu elementos do Vetor:\n", n);
    for (size_t i = 0; i < n; i++)
    {
        printf("vetor[%zu] = ", i);
        scanf("%f", &vetor[i]);
    }
}

void exibirVetor(const float* vetor, size_t n)
{
    printf("[ ");
    for (size_t i = 0; i < n; i++)
        printf("%.*f ", PRECISAO_DE_SAIDA, vetor[i]);
    printf("]");
}

float mediaDe(const float vetor[], size_t n)
{
    float media = 0.0f;
    for (size_t i = 0; i < n; i++)
        media += vetor[i];

    return media / n;
}
