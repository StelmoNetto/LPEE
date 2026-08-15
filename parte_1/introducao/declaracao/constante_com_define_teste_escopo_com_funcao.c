#include <stdio.h>

void funcao();

void outraFuncao()
{
	printf("O valor inicial é: %d\n", VALOR_INICIAL);
}

int main() 
{
	funcao();

#define VALOR_INICIAL 10
	int valor = VALOR_INICIAL;

//	funcao();
	
	return 0;
}

void funcao()
{
	printf("O valor inicial é: %d\n", VALOR_INICIAL);
}

/*
* Pré-processador: O código define uma constante chamada VALOR_INICIAL com o valor 10 usando a diretiva #define. Isso significa que, em qualquer lugar do código onde VALOR_INICIAL for usado, ele será substituído pelo valor 10 durante a fase de pré-processamento.

int main() 
{
	int valor = 10;

	return 0;
}
*/