#include <stdio.h>
int main() {
	long vL = -5L; //4 bytes
	unsigned int vUI = 2U; //4 bytes
	printf("long (%zu) + unsigned int (%zu) = unsigned int (%zu)\n", sizeof(vL), sizeof(vUI), sizeof(vL + vUI));

	long long vLL = -5LL; //8 bytes	
	printf("unsigned int (%zu) + long long (%zu) = long long (%zu)\n", sizeof(vUI), sizeof(vLL), sizeof(vUI + vLL));

	char vC = 2; //1 byte
	short vS = 1; //2 bytes
	printf("char (%zu) + short (%zu) = int (%zu)\n", sizeof(vC), sizeof(vS), sizeof(vC + vS));

	double soma = 1 + 2.5; //1(int) + 2.5(double) = 1(double) + 2.5(double) = 3.5(double)
	float razao = 1 / 2; //1(int) / 2(int) = 0(int) -> 0.0(float)

	//Operações aritméticas com diferentes tipos: inteiro e real
	float resultadoFloat = vLL + 2.5f;
	printf("long long (%zu) + float (%zu) = float (%zu)\n", sizeof(vLL), sizeof(2.5f), sizeof(resultadoFloat));
}