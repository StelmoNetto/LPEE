#include <stdio.h>

int main()
{
	char disciplina[] = "Programacao";

	printf("%s\n", disciplina); //Programacao
	printf("%.5s\n", disciplina); //Progr
	printf("%.11s\n", disciplina); //Programacao
	printf("%3.5s\n", disciplina); //Progr
	printf("|%6.5s\n", disciplina); //| Progr
	printf("%-15s|\n", disciplina); //Programacao    |
}