#include <stdio.h>

typedef unsigned long long int inteiro;
const int ERRO_ENTRADA_NEGATIVA = 1;

inteiro fatorial(inteiro n)
{
    if (n < 0)
    {
        printf("Entrada n < 0\n");
        return ERRO_ENTRADA_NEGATIVA;
    }

    inteiro fatorialDeN = 1LLU;

    for (inteiro i = 2; i <= n; i++)
        fatorialDeN *= i;
    return fatorialDeN;
}

int main()
{
    long numero = -3L;

    inteiro fatorialDeNumero = fatorial(numero);

    if (fatorialDeNumero != ERRO_ENTRADA_NEGATIVA)
        printf("%llu\n", fatorialDeNumero);

    return 0;
}
