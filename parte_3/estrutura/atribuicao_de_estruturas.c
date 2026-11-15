#include<stdio.h>

int main()
{
    struct Disciplina //Local
    {
        //Declaração dos membros
        char nome[50];
        float nota1, nota2, nota3;
    };

    struct Disciplina programacao = {"IPEE", 10.f, 7.0f, 4.0f}, matematica;

    matematica = programacao;

    printf("A disciplina %s tem notas = [%f %f %f]", matematica.nome, \
    matematica.nota1, matematica.nota2, matematica.nota3);
}