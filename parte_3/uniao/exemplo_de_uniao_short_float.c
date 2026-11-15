#include<stdio.h>

int main()
{
    union FonteDePagamento
    {
        short horas;
        float vendas;
    };

    union FonteDePagamento emprego;

    emprego.horas = 36;
    printf("Horas = %hd\n", emprego.horas);

    //O que acontecerá abaixo?
    emprego.vendas = 3541.85;
    printf("Vendas = %.2f\n", emprego.vendas);
}