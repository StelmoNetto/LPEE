#include <stdio.h>
#include <stdlib.h>

//Procedimento exibe todos os elementos do vetor
void imprimeVetor(const int* vetor, size_t n) //ou: void imprimeVetor(const int vetor[], size_t n)
{
    printf("Elementos do vetor:\n");
    for (size_t i = 0; i < n; ++i)
        printf("%d ", vetor[i]);
    printf("\n");
}

int main()
{
    int n, *dados;

    printf("Entre com o numero de elementos\n");
    if (scanf("%d", &n) != 1) return 1;

    dados = (int*)malloc(n * sizeof(int));
    if (!dados) return 1;

    printf("Entre com os elementos do vetor\n");
    for (int i = 0; i < n; ++i)
        scanf("%d", &dados[i]);

    imprimeVetor(dados, (size_t)n);

    free(dados);
    return 0;
}
