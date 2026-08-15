#include <stdio.h>

int main(){
	double salario = 1500.5;

	printf("%7.2f\n", salario); //1500.50
	printf("%8.2f\n", salario); //_1500.50
	printf("%8.3f\n", salario); //1500.500
	printf("%3.2f\n", salario); //1500.50 apresenta todos os dígitos

	return 0;
}