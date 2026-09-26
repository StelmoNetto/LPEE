#include<stdio.h>

#define NUMERO_DE_NOTAS 3
int main()
{
    int i;
    float somatorio = 0.0f, media, notas[NUMERO_DE_NOTAS];

    puts("Entre com as 3 notas");
    for(i = 0; i < NUMERO_DE_NOTAS; ++i)
    {
        scanf("%f", &notas[i]);
        somatorio+= notas[i];
    }

    printf("A média das notas { ");
    for(i = 0; i < NUMERO_DE_NOTAS; ++i)
        printf("%f ", notas[i]);
    printf("}");

    media = somatorio / NUMERO_DE_NOTAS;
    printf(" = %.1f", media);
}