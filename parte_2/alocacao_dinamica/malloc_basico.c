#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* ptrParaRegiaoAlocada = malloc(1000); //Reserva 1000 bytes na RAM
    free(ptrParaRegiaoAlocada);
    return 0;
}