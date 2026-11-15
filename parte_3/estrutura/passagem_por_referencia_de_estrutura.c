#include <stdio.h>
#define NUMERO_DE_NOTAS 3

struct Disciplina {
    char nome[50];
    float notas[NUMERO_DE_NOTAS];
};

void inserirNotas(struct Disciplina* disciplina) {
    printf("Entre com o nome da disciplina\n");
    scanf("%49s", disciplina->nome); 
    
    for (int i = 0; i < NUMERO_DE_NOTAS; ++i) {
        printf("Entre com a %dª nota\n", i + 1);
        scanf("%f", &disciplina->notas[i]);
    }
}

float calculaMediaDasNotas(const struct Disciplina* disciplina) {
    float soma = 0.0f;
    for (int i = 0; i < NUMERO_DE_NOTAS; ++i) {
        soma += disciplina->notas[i];
    }   
    return soma / NUMERO_DE_NOTAS;
}

int main() {
    struct Disciplina programacao;
    
    inserirNotas(&programacao);
    
    float media = calculaMediaDasNotas(&programacao);
    
    printf("A disciplina %s tem média = %.2f\n", programacao.nome, media);
    
    return 0;
}
