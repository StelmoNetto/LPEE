#include <stdio.h>

int main()
{
	double distanciaEmM = 12345.6789;

	printf("distancia = %e m\n", distanciaEmM); //1.234568e+04
	printf("distancia = %.3e m\n", distanciaEmM); //1.235e+04

	printf("distancia = %g m\n", distanciaEmM); //12345.7
}