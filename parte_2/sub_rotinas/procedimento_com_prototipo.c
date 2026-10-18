#include <stdio.h>
#include <stdlib.h>

void exibeMensagemDeErro(); //Declaração da assinatura

int main()
{
    exibeMensagemDeErro(); //Chamada
    return 0;
}

void exibeMensagemDeErro()
{ //Definição do corpo
    printf("Um erro ocorreu\n");
    exit(EXIT_FAILURE); //Da biblioteca stdlib.h
}
