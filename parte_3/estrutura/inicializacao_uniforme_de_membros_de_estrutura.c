#include<stdio.h>

int main()
{
    struct Disciplina //Local
    {
        //Declaração dos membros
        char nome[50];
        float nota1, nota2, nota3;
    };

    struct Disciplina programacao = {"IPEE", 10.f, 7.0f, 4.0f};

    printf("A disciplina %s tem notas = [%f %f %f]", programacao.nome, \
    programacao.nota1, programacao.nota2, programacao.nota3);
}