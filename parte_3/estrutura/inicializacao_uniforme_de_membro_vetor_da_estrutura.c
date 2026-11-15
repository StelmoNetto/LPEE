#include<stdio.h>
#define NUMERO_DE_NOTAS 3

int main()
{
    struct Disciplina //Local
    {
        //Declaração dos membros
        char nome[50];
        float notas[NUMERO_DE_NOTAS];
    };

    struct Disciplina programacao = {"IPEE", {10.f, 7.0f, 4.0f}};

    printf("A disciplina %s tem notas = [ ", programacao.nome);
    for(int i = 0; i < NUMERO_DE_NOTAS; ++i)
        printf("%f ", programacao.notas[i]);
    printf("]");
}