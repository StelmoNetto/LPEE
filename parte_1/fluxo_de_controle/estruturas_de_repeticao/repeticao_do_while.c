#include <stdio.h>

int main()
{
    int contador = 0; // Inicialização

    do
    {  // Corpo de Loop
        printf("%d\n", contador);
        contador++; // Expressão de atualização
    } while (contador < 3); // Condição do Loop
    return 0;
}
