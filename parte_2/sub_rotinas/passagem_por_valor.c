#include <stdio.h>

void exibeMensagemDeErro(int tipoDoErro) //Declaração.
{
    switch (tipoDoErro)
    {
        case 0:
        case 1:
            printf("Um erro de leitura ocorreu\n");
            break;
        default:
            printf("Um erro inesperado ocorreu\n");
    }
}

int main(void)
{
    exibeMensagemDeErro(0); //Chamada do procedimento.
    return 0;
}
