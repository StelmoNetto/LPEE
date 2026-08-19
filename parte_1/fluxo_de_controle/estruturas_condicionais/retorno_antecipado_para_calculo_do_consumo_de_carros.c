#include <stdio.h>

int main()
{
	float consumoDeCombustivelEmKmPorL;
	float distanciaPercorridaEmKm;
	float volumeDeCombustivelEmL;

	puts("Entre com a distancia percorrida em km\n");
	scanf("%f", &distanciaPercorridaEmKm);

	if(distanciaPercorridaEmKm < 0)
    {
        puts("Nao existe distancia negativa.\n Execute novamente");
        return 1; //Finaliza retornando um valor indicador de erro
    }

    puts("Forneca o volume de gasolina em litros\n");
	scanf("%f", &volumeDeCombustivelEmL);

    if(volumeDeCombustivelEmL <= 0)
    {
        puts("Valor incorreto de volume.\n Execute novamente");
        return 2; //Finaliza retornando um valor indicador de erro
    }

	//O cálculo só será realizado se todas as entradas estiverem corretas
	consumoDeCombustivelEmKmPorL = distanciaPercorridaEmKm / volumeDeCombustivelEmL;
	printf("O consumo de combustivel = %f km/l\n", consumoDeCombustivelEmKmPorL);
}
