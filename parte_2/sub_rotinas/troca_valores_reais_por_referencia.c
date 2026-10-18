#include <stdio.h>

void trocarValores(float* a, float* b)
{
    float copiaDeA = *a; //Acessa a da main()
    *a = *b; //Altera a da main()
    *b = copiaDeA; //Altera b da main()
}

int main()
{
    float a = 2.0f, b = 1.5f;

    trocarValores(&a, &b);
    printf("A = %f B = %f\n", a, b);
    return 0;
}