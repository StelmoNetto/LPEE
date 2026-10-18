#include <stdio.h>
#include <stdlib.h>

void exibeMensagemDeErro() //Declaração
{ //Definição do corpo
    printf("Um erro ocorreu\n");

    exit(EXIT_FAILURE); //Da biblioteca stdlib.h
}

int main()
{
    exibeMensagemDeErro(); //Chamada do procedimento

    return 0;
}