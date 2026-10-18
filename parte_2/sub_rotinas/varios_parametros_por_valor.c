#include <stdio.h>

void exibeSoma(float primeiroOperando, float segundoOperando) //Declaração com 2 parâmetros
{
    printf("%f + %f = %f\n", primeiroOperando, segundoOperando, primeiroOperando + segundoOperando);
}

int main()
{
    float segundoParamentroAtual = 12.4f;
    exibeSoma(12.1f, segundoParamentroAtual); //Chamada do procedimento.
    return 0;
}
