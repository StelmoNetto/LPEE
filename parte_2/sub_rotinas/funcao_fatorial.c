#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
uint64_t fatorial(uint8_t n)
{
    uint64_t fatorialDeN = 1;

    for (int i = 2; i <= n; ++i)
        fatorialDeN *= i; //Ou fatorialDeN = fatorialDeN * i;

    return fatorialDeN;
}

int main()
{
    uint8_t numero;

    printf("Entre com um numero para calcular numero!\n");
    if (scanf("%u", &numero) != 1) return 1;

    uint64_t fatorialDeNumero = fatorial(numero);

    printf("%u!= %"PRIu64"\n", numero, fatorialDeNumero);
    //Ou
    printf("%u!= %"PRIu64"\n", numero, fatorial(numero));

    return 0;
}