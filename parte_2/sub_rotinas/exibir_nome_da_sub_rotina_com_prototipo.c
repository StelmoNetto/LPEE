#include <stdio.h>
#include <stdlib.h>

void exibeNomeDoProcedimento(); //Declaração da assinatura

int main()
{
    exibeNomeDoProcedimento(); //Chamada do procedimento
    return 0;
}

void exibeNomeDoProcedimento()
{
    printf("Meu nome é: %s\n", __func__); //__func__ contém o nome (C99/C11)
}