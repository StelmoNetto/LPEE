#include<stdio.h>

int main()
{
    struct Disciplina //Local
    {
        //Declaração dos membros
        char nome[50];
        float nota1, nota2, nota3;
    };

    struct Disciplina programacao;

    programacao = (struct Disciplina){"LPEE", 8.0f, 9.5f, 5.7f};

    printf("A disciplina %s tem notas = [%f %f %f]\n", programacao.nome, \
    programacao.nota1, programacao.nota2, programacao.nota3);
}