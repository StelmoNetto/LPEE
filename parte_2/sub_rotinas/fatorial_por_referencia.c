#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// Em C (C99/C11), passagem por referência é implementada via ponteiro
void fatorial(uint8_t n, uint64_t* fatorialDeN)
{
    *fatorialDeN = 1;

    for (int i = 2; i <= n; ++i)
        *fatorialDeN *= i; //Ou *fatorialDeN = *fatorialDeN * i;

    return; //Procedimentos podem retornar nada (void)
}

int main()
{
    unsigned char numero;
    uint64_t fatorialDeNumero;

    printf("Entre com um numero para calcular numero!\n");
    if (scanf("%hhu", &numero) != 1) return 1;

    fatorial((uint8_t)numero, &fatorialDeNumero);

    printf("%hhu!= %"PRIu64"\n", numero, fatorialDeNumero);
    return 0;
}