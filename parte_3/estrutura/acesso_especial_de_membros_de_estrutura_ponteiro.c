#include <stdio.h>
#include <stdlib.h>

#define NUMERO_DE_NOTAS 4
struct Disciplina {
    char nome[50];
    float notas[NUMERO_DE_NOTAS];
};

int main() {
    struct Disciplina* disciplina = (struct Disciplina*)malloc(sizeof(struct Disciplina));

    puts("Nome da disciplina?");
    scanf("%s",disciplina->nome);
    
    puts("Suas 4 notas:");
    scanf("%f%f%f%f", &disciplina->notas[0], &(disciplina->notas[1]), &(*disciplina).notas[2],disciplina->notas + 3);

    printf("A disciplina %s tem notas = [%f %f %f %f]", disciplina->nome,\
    disciplina->notas[0],disciplina->notas[1], (*disciplina).notas[2],*(disciplina->notas + 3));
}