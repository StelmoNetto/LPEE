#include <stdio.h>

int a, b; //variáveis globais, pois estão fora de um bloco de instruções

//procedimento fazendo uso das variáveis globais
void trocarValores()
{
    int copiaDeA = a; /*copiaDeA é local ao bloco de sub-rotina trocarValores. Assim, o conteúdo da mesma só poderá ser acessada dentro dessa sub-rotina.*/
    a = b;
    b = copiaDeA;
}

int main()
{
    printf("Programa que troca os valores de duas variaveis\n");

    printf("Entre com o valor de A e B\n");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    printf("Antes da troca:\n A = %d e B = %d\n", a, b);

    trocarValores();

    printf("Após a troca:\n A = %d e B = %d\n", a, b);

    return 0;
}
