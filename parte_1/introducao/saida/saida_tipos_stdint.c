#include <stdio.h>
#include <stdint.h>   // Define os tipos (int32_t, uint64_t...)
#include <inttypes.h> // Define os especificadores de formato (PRId32, PRIu64...)

int main(void) {
    // Declaração de variáveis com tamanho exato garantido em qualquer arquitetura
    int8_t   num8 = -42;
    uint16_t num16 = 65535;
    int32_t  num32 = -2147483647; //-2147483648; //Pode resultar em erro de compilação por interpretar o literal como unsigned. Solução: INT32_MIN
    uint64_t num64 = 18446744073709551615ULL;

    printf("--- Exibindo tipos do <stdint.h> de forma portável ---\n\n");

    // NOTA: Repare que a macro fica FORA das aspas, colada nelas!
    // O compilador lê "Número 8 bits: %" "d" "\n" e transforma em uma coisa só.

    printf("1. int8_t   (8 bits com sinal)   : %" PRId8 "\n", num8);
    printf("2. uint16_t (16 bits sem sinal)  : %" PRIu16 "\n", num16);
    printf("3. int32_t  (32 bits com sinal)  : %" PRId32 "\n", num32);
    printf("4. uint64_t (64 bits sem sinal)  : %" PRIu64 "\n", num64);

    // Bônus: Exibindo em formato Hexadecimal Maiúsculo (Troca o 'u' por 'X')
    printf("5. uint64_t (Em Hexadecimal)     : 0x%" PRIX64 "\n", num64);

    return 0;
}
