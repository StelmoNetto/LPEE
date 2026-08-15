#include <stdio.h>
#include <stdint.h>

int main() {
    //Tipo Menor para Tipo Maior
    int8_t menorNegativo = -5; // Representação binária: 11111011
    int32_t maior = menorNegativo; // Extensão de sinal: 11111111 11111111 11111111 11111011
    printf("Maior: %d\n", maior); // Imprime: -5

    uint8_t menorSemSinal = 200;
    uint64_t maiorSemSinal = menorSemSinal; // Extensão de zero

    //Tipo Maior para Tipo Menor
    int32_t grande = 300; // Binário: 00000000 00000000 00000001 00101100
    int8_t pequeno = grande; // Trunca para 8 bits: 00101100 (que é 44)
    printf("Pequeno: %d\n", pequeno); // Imprime: 44 (Houve perda de dados!)

	//De "Com Sinal" para "Sem Sinal" de mesmo tamanho em bits n
    int8_t comSinal8 = -1; // Binário: 11111111
    uint8_t semSinal8 = comSinal8; // Interpreta 11111111 como positivo
    printf("Sem sinal: %u\n", semSinal8); // Imprime: 255

	//De "Sem Sinal" para "Com Sinal" de mesmo tamanho em bits n
    uint16_t semSinal16 = 40000; // Binário: 10011100 01000000
    int16_t comSinal16 = semSinal16; // O bit mais à esquerda (1) indica negativo
    printf("Com sinal: %d\n", comSinal16); // Imprime: -25536

	//Conversão de Inteiro (stdint) para Real (float / double)
    int32_t inteiro = 16777217; // Requer mais precisão do que o float padrão suporta de forma exata
    float varFloat = inteiro;
    double varDouble = inteiro;

    printf("Float: %.1f\n", varFloat);  // Imprime: 16777216.0 (Perdeu precisão!)
    printf("Double: %.1f\n", varDouble); // Imprime: 16777217.0 (Exato)

	//Conversão de Real (float / double) para Inteiro (stdint)
    double pi = 3.99;
    int32_t inteiroPi = pi; // Trunca a parte decimal, não arredonda para 4

    double gigante = 9e15;
    int16_t quebraDistema = gigante; // Estoura completamente o limite de 32767 do int16_t

    printf("Truncado: %d\n", inteiroPi); // Imprime: 3
    printf("Estouro: %d\n", quebraDistema); // Imprime lixo (ex: -32768 ou 0 dependendo da CPU)

    return 0;
}
