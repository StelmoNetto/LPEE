#include <stdio.h>
int main() {
	int caractere;
	printf("Digite um caractere: "); // Solicita ao usuário que digite um caractere
	caractere = getchar(); // Lę um caractere do teclado
	printf("O caractere digitado foi: %c de codigo ASCII %d\n", caractere, caractere); // Exibe o caractere digitado e seu código ASCII
}
