#include <stdio.h>

int main()
{
    int contador = 5;

    int *enderecoDeContador = &contador; // O endereço de contador é atribuído ao ponteiro enderecoDeContador, que aponta para a variável contador.
    printf("Endereco de 'contador' = %p\n", enderecoDeContador);

    int valorDeContador = *enderecoDeContador; // O conteúdo da variável apontada (contador) é atribuído a variável valorDeContador.
    printf("valor de 'contador' = %d\n", valorDeContador);

    return 0;
}
