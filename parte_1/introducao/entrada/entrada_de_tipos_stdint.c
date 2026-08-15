#include <stdio.h>
#include <stdint.h>
#include <inttypes.h> // OBRIGATÓRIO para usar as macros SCN

int main() {
    // Declaração de variáveis usando stdint.h
    int8_t   temperaturaEmCelsius;
    uint8_t  idadeEmAnos;
    uint16_t numeroDaPortaDeRede;
    int32_t  populacaoDaCidade;
    int64_t  dividaDoPais;

    printf("=== EXEMPLOS DE SCANF COM STDINT.H ===\n\n");

    // 1. Tipos de 8 bits (Cuidado: %c leria um caractere, SCNd8 lê o NÚMERO)
    printf("Digite a temperatura (-128 a 127)°C: ");
    scanf("%" SCNd8, &temperaturaEmCelsius);

    printf("Digite uma idade (0 a 255) anos: ");
    scanf("%" SCNu8, &idadeEmAnos);

    // 2. Tipo de 16 bits
    printf("Digite uma porta de rede (0 a 65535): ");
    scanf("%" SCNu16, &numeroDaPortaDeRede);
    // 3. Tipo de 32 bits
    printf("Digite a populacao da cidade: ");
    scanf("%" SCNd32, &populacaoDaCidade);

    // 4. Tipo de 64 bits (Geralmente exigem %lld ou %ld, a macro resolve)
    printf("Digite a divida publica do pais em Reais: ");
    scanf("%" SCNd64, &dividaDoPais);

    return 0;
}
