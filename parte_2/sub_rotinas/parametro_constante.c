#include <stdio.h>

void exibir(const double* parametro)
{
    // *parametro = 1.4; //Erro: protege alterações
    printf("Parâmetro = %f\n", *parametro);
}

int main()
{
    double peso = 3.2;

    exibir(&peso);
    return 0;
}
