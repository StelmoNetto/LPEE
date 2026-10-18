#include "funcoes_vetoriais.h" //Nosso cabeçalho
#include <stdio.h>

int main()
{
    enum { N = 3};
    float dados[N]; //Na pilha

    lerVetor(dados, N);

    printf("Média(");
    exibirVetor(dados, N);
    printf(") = %.*f\n", PRECISAO_DE_SAIDA, mediaDe(dados,N));

    return 0;
}

