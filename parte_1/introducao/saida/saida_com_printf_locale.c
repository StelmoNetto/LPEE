#include<stdio.h> // Biblioteca padrão do C para E/S
#include <locale.h> // Biblioteca para suporte a localização
int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Olá mundo!\n");

	char str[] = "Olá mundo!";
	printf(str);

	return 0;
}