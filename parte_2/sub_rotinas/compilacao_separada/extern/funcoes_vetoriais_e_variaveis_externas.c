#include "funcoes_vetoriais_e_variaveis_globais.h" //Nosso cabeçalho

char inicioDoVetor = '[';
char fimDoVetor = ']';

static const char* mensagemDeMedia = "Média("; //Visível apenas onde foi definida

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
    printf("%c ",inicioDoVetor);
    for (size_t i = 0; i < n; i++)
        printf("%.*f ", PRECISAO_DE_SAIDA, vetor[i]);
    putchar(fimDoVetor);
}

extern inline float mediaDe(const float vetor[], size_t n);


void exibeMedia(const float vetor[], size_t n)
{
    printf(mensagemDeMedia);
    exibirVetor(vetor, n);
    printf(") = %.*f\n", PRECISAO_DE_SAIDA, mediaDe(vetor,n));
}

