#include <stdio.h>

int main() {
    signed char hhd;
    unsigned char hhu;
    short hd;
    unsigned short hu;
    long ld;
    unsigned long lu;
    long long lld;
    unsigned long long llu;
	double d;       // Ponto flutuante de precisão dupla
    long double Lf;     // Ponto flutuante de precisão estendida
	char cadeiaDe10Caracteres[11]; // 10 caracteres + '\0'

    printf("Digite os dados signed char e unsigned char:\n");
    scanf("%hhd %hhu", &hhd, &hhu); // %hhd e %hhu -> signed char e unsigned char usados como números inteiros de 1 byte (8 bits)

    printf("Digite os dados short e unsigned short:\n");    
    scanf("%hd %hu", &hd, &hu); // %hd e %hu   -> short e unsigned short (16 bits)

	printf("Digite os dados long e unsigned long:\n");    
    scanf("%ld %lu", &ld, &lu); // %ld e %lu   -> long e unsigned long (32 ou 64 bits)

	printf("Digite os dados long long e unsigned long long:\n");
    scanf("%lld %llu", &lld, &llu); // %lld e %llu -> long long e unsigned long long (Garantido no mínimo 64 bits)

    printf("Digite o dado double:\n");
	scanf("%lf", &d); // %lf         -> Lê o tipo 'double'

	printf("Digite o dado long double:\n");    
    scanf("%Lf", &Lf);// %Lf         -> Lê o tipo 'long double'

	printf("Digite uma cadeia de ate 10 caracteres:\n");
	scanf("%10s", cadeiaDe10Caracteres); // %10s        -> Lê uma string de até 10 caracteres (mais o caractere nulo '\0')

    return 0;
}
