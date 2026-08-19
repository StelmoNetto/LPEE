#include <stdio.h>

int main()
{
    double valor1 = 2.1, valor2 = 4.4;
    double maior;

    if (valor1 >= valor2)
        maior = valor1;
    else
        maior = valor2;

    printf("maior(%f, %f) = %f\n", valor1, valor2, maior);

    valor1 = 5.1, valor2 = 0.4;

    // Uso do operador ternário
    maior = (valor1 >= valor2) ? valor1 : valor2;

    printf("maior(%f, %f) = %f\n", valor1, valor2, maior);
    return 0;
}
