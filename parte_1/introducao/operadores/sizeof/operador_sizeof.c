#include <stdio.h>
#include <stddef.h>
int main() {
	short s;
	double d;
	char cadeia[] = "Oi!"; //4 caracteres = 3 letras + 1 caractere nulo '\0'
	printf("sizeof(char) = %zu\n", sizeof(char)); // Saída: 1
	printf("sizeof(int) = %zu\n", sizeof(int)); // Saída: 4
	printf("sizeof(d) = %zu\n", sizeof(d)); // Saída: 8
	printf("sizeof(long double) = %zu\n", sizeof(long double)); // Saída: 8 ou 16

	size_t tamanho = sizeof(s + 1); //O resultado da expressão s + 1 é promovido para int
	printf("sizeof(s + 1) = %zu\n", tamanho); // Saída: 4
	printf("sizeof(cadeia) = %zu\n", sizeof(cadeia)); // Saída: 4
}