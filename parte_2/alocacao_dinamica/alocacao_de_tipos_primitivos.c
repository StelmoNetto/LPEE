#include <stdio.h>
#include <stdlib.h>

int main()
{
    short* ptrShort = malloc(sizeof(short));

    if(ptrShort == NULL)
    {
        puts("Sem memória");
        return 1;
    }

    //Uso, se chegou aqui
    *ptrShort = 12;

    //Liberar, se não for mais necessário
    free(ptrShort);

    float* ptrFloat = malloc(sizeof(float));

    if(!ptrFloat) //Não NULL
    {
        puts("Não há memória suficiente");
        exit(EXIT_FAILURE);
    }

    //Uso, se chegou aqui
    *ptrFloat = 3.14f;

    //Liberar, se não for mais necessário
    free(ptrFloat);

    return 0;
}