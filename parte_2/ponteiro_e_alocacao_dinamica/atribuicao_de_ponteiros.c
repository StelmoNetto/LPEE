#include <stdio.h>

int main()
{
    int x = 0;
    int *p1 = NULL, *p2 = NULL; // Dois ponteiros para variáveis inteiras

    p1 = &x;
    p2 = p1; // O endereço em p1 (de x) é atribuído a p2, então ambos apontam para x.

    *p2 = 5;

    printf("Endereco em p1: %p\n", p1);
    printf("Endereco em p2: %p\n", p2);
    printf("conteudo da variavel (x) apontada por p1: %d\n", *p1);
    printf("conteudo da variavel (x) apontada por p2: %d\n", *p2);

    return 0;
}
