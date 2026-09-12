#include <stdio.h>

int main() {
    const short MAXIMO = 3;
    short contagemDeIteracoes = 1;
    float somatorio = 0.0f, x;

    while(contagemDeIteracoes <= MAXIMO)
    {
        printf("Entre com o valor de x%hd\n",contagemDeIteracoes);
        scanf("%f", &x);

        somatorio += x; //somatorio = somatorio + x;
        contagemDeIteracoes++; //contagemDeIteracoes = contagemDeIteracoes + 1;
    }

    printf("x1 + x2 + x3 = %f", somatorio);

    return 0;
}
