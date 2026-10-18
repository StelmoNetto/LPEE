#include <stdio.h>

// Cria uma fábrica de funções
#define FUNCAO(nome, a) int funcao_##nome(int x) { return (a) * x; }

//Gera as funções
FUNCAO(quadruplo, 4) //Gera: int funcao_quadruplo(int x) { return (4) * x; }
FUNCAO(dobro, 2)     //Gera: int funcao_dobro(int x) { return (2) * x; }

#undef FUNCAO //Remove a definição anterior
#define FUNCAO 34 //Define a nova macro
#define EXIBE(a) puts( #a )

int main()
{
    printf("quadruplo(13): %d\n", funcao_quadruplo(13) );
    printf("dobro(21): %d\n", funcao_dobro(21) );
    printf("%d\n", FUNCAO);
    EXIBE(bilhao);  // note a falta de aspas
}