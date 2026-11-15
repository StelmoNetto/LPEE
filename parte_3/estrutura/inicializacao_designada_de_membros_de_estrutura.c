#include<stdio.h>

int main()
{
    struct Disciplina //Local
    {
        //Declaração dos membros
        char nome[50];
        float nota1, nota2, nota3;
    };

    struct Disciplina programacao = {
        .nome = "IPEE", 
        .nota1 = 10.f, 
        .nota2 = 7.0f, 
        .nota3 = 4.0f
    };

    printf("A disciplina %s tem notas = [%f %f %f]\n", programacao.nome, \
    programacao.nota1, programacao.nota2, programacao.nota3);

    struct Disciplina matematica = {
        .nome = "Cálculo II"
    }; //nota1 = nota2 = nota3 = 0.0f

    printf("A disciplina %s tem notas = [%f %f %f]", matematica.nome, \
    matematica.nota1, matematica.nota2, matematica.nota3);
}