#include <stdio.h>

int main() {
    char c;
    int d, i;
    unsigned int u, o, x;
    float f, e, g, a;

    printf("Digite um caractere:\n");
    // %c  -> Lê um único caractere (incluindo espaços e quebras de linha!)
    // Dica: Espaço antes do %c ignora quebras de linha acumuladas no buffer
    scanf(" %c", &c);

    printf("Digite um inteiro decimal sinalizado:\n");
    // %d  -> Lê um número inteiro decimal com sinal (Base 10)
    scanf("%d", &d);

    printf("Digite um inteiro sinalizado em decimal ou octal ou hexa:\n");
    // %i  -> Lê um inteiro detectando a base automaticamente (12 para decimal, 012 para octal, 0x12 para hex)
    scanf("%i", &i);

	printf("Caractere lido: %c Decimal lido: %d Inteiro lido: %i\n\n", c, d, i);

    printf("Digite um inteiro decimal sem sinal, um octal e um hexadecimal (aceita 0x ou apenas os dígitos):\n");
    // %u  -> Lê um inteiro decimal sem sinal (unsigned)
    // %o  -> Lê um número na base octal (converte automaticamente para o valor inteiro)
    // %x  -> Lê um número na base hexadecimal (aceita prefixo 0x ou apenas os dígitos)
    scanf("%u %o %x", &u, &o, &x);
	printf("Decimal sem sinal lido: %u Octal lido: %o Hexadecimal lido: %x\n\n", u, o, x);

    // %f, %e, %g, %a -> No scanf para o tipo 'float', todos eles se comportam EXATAMENTE igual.
    // Todos aceitam notação com ponto (3.14), notação científica (1.2e3) e hexadecimal de ponto flutuante (0x1.5p3).
    printf("Digite quatro numeros de ponto flutuante com espaços ou em cada linha:\n");
    scanf("%f %e %g %a", &f, &e, &g, &a);
	printf("Numeros lidos: %f %e %g %a\n", f, e, g, a);

    return 0;
}
