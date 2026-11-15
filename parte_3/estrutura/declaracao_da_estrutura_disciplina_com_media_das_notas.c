#include<stdio.h>

struct Disciplina //Global
{
    //Declaração dos membros
    char nome[50];
    float nota1, nota2, nota3;
};

int main()
{   
    struct Disciplina programacao;
     
    puts("Entre com o nome da disciplina");
    scanf("%s",programacao.nome);

    puts("Entre com as notas 1, 2 e 3");
    scanf("%f%f%f", &programacao.nota1, &programacao.nota2, &programacao.nota3);

    float media = (programacao.nota1 + programacao.nota2 + programacao.nota3) / 3;
    printf("O aluno %s tem média = %f\n", programacao.nome, media);
}