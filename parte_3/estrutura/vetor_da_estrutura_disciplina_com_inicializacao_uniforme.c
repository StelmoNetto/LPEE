#include <stdio.h>

#define NUMERO_DE_DISCIPLINAS 2
#define NUMERO_DE_NOTAS 3

struct Disciplina {
    const char *nome;
    float notas[NUMERO_DE_NOTAS];
};

int main() {
    struct Disciplina disciplinas[NUMERO_DE_DISCIPLINAS] = {
        {"IPEE", {10.0, 7.0, 4.0}}, 
        {"Cálculo I", {8.0, 5.0, 9.0}}
    };
    
    for (int i = 0; i < NUMERO_DE_DISCIPLINAS; ++i) {
        printf("A disciplina %s tem notas = [ ", disciplinas[i].nome);
        
        for (int j = 0; j < NUMERO_DE_NOTAS; ++j) {
            printf("%.1f ", disciplinas[i].notas[j]);
        }
        
        printf("]\n");
    }
    
    return 0;
}