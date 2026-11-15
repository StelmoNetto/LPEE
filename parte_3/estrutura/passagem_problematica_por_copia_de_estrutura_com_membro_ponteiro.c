#include <stdio.h>
#include <stdlib.h>

struct Registro {
    float* ptr;
    int membro;
};

void usaEstruturaMasDeletaIncorretamente(struct Registro copia) {
    free(copia.ptr); //Mas copia.ptr = estrutura.ptr;
}

int main() {
    float* valor_alocado = (float*)malloc(sizeof(float));
    if (!valor_alocado) {
        puts("Memória insuficiente!"); exit(1);
    }
    *valor_alocado = 2.0f;

    struct Registro estrutura = { .ptr = valor_alocado, .membro = 1 };

    usaEstruturaMasDeletaIncorretamente(estrutura);

    free(estrutura.ptr); // Erro de Execução (Liberação Dupla): O ponteiro original 'estrutura.ptr' ainda aponta para o mesmo endereço que acabou de ser liberado

    return 0;
}
