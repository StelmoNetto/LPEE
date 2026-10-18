#include "funcoes_vetoriais_e_variaveis_globais.h" //Nosso cabeçalho

int main()
{
    enum { N = 3};
    float dados[N]; //Na pilha

    lerVetor(dados, N);

    inicioDoVetor = '{';
    fimDoVetor = '}';

    exibeMedia(dados, N);

    return 0;
}
