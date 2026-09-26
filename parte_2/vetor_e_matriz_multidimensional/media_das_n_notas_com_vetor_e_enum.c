#include<stdio.h>

int main()
{
    enum{ NUMERO_DE_NOTAS = 3};
    
    float somatorio = 0.0f, media;
    float notas[NUMERO_DE_NOTAS] = {10.0f, 7.f, 5E0f};

    printf("A média das notas { ");
    for(int i = 0; i < NUMERO_DE_NOTAS; ++i)
    {
        printf("%f ", notas[i]);
        somatorio+= notas[i];
    }
    printf("}");

    media = somatorio / NUMERO_DE_NOTAS;
    printf(" = %.1f", media);
}