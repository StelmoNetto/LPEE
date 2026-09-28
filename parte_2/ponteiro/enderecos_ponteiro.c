#include <stdio.h>

int main()
{
    short var = 4; //16 bits
    short *ponteiro = &var; // Um ponteiro para uma variável do tipo short

    printf("Endereco de 'var': (&var) = %p\n", &var);
    printf("Endereco de 'ponteiro': (&ponteiro) = %p\n", &ponteiro);
    printf("Conteudo de 'var': (*var) = %hd\n", *ponteiro);

    return 0;
}
