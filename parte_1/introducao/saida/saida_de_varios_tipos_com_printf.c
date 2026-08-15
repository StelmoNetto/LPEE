#include<stdio.h>
#include<stdbool.h> //Tipo bool
int main() {
	_Bool desligado = 5; //Mais correto seria desligado = 1;
	printf("Logico: %d\n", desligado); //Exibe 1

	bool ligado = true; //Incluir biblioteca stdbool.h
	char caractere = 'b';
	int numeroDeAlunos = 10;
	float velocidadeEmMPorS = 3.14f;
	const double PI = 3.14159265358979323846; //Variável constante. Não pode ser alterada
	char sexo[] = "masculino";

	printf("Logico: %d Caractere: %c ASCII(%c): %d Inteiro: %d\n", ligado, caractere, caractere, caractere, numeroDeAlunos);
	printf("Real: %f   Real longo: %lf String: %s\n", velocidadeEmMPorS, PI, sexo);

	return 0;
}