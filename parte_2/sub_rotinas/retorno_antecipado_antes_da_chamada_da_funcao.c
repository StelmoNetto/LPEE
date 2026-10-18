#include <stdio.h>

typedef unsigned long long int inteiro;
const int ERRO_ENTRADA_NEGATIVA = 1;

inteiro fatorial(inteiro n)
{
    inteiro fatorialDeN = 1LLU;

    for (inteiro i = 2; i <= n; i++)
        fatorialDeN *= i;
    return fatorialDeN;
}

int main()
{
    long numero = -3L;

    if (numero < 0)
    {
        printf("Entrada numero < 0\n");
        return ERRO_ENTRADA_NEGATIVA;
    }
    printf("%llu\n", fatorial(numero));
    return 0;
}