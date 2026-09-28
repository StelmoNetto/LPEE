#include <stdio.h>

int main()
{
    int dado = 2;
    int *ptrInt = &dado;

    void* ptrVoid = ptrInt; //Recebeu

    float* ptrFloat = NULL;
    ptrFloat =  ptrVoid; //Atribuiu

    printf("%f", *ptrFloat);

    return 0;
}
