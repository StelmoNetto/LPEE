#include <stdio.h>

int main()
{
	double PI = 3.141592653589793;

	//Padrão (Sem limite especificado - exibe 6 casas decimais)
	printf("PI = %f\n", PI);

	// Para formatar o número com 2 casas decimais: %.2f
	printf("PI = %.2f\n", PI); //3.14

	// Para formatar o número com 4 casas decimais: %.4f
	printf("PI = %.4f\n", PI); //3.1416

	//Sem nenhuma casa decimal (ocorre arredondamento): %.0f
	double valor = 123.99;
	printf("valor = %.0f\n", valor); //124

	const int precisao = 5;
	printf("PI = %.*f\n", precisao, PI); //3.14159

	return 0;
}