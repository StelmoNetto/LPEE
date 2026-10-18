#include <stdio.h>

void procedimentoComVarEstatica()
{
    static int variavelEstatica = 0;
    printf("Valor da variavel estática = %d\n", variavelEstatica++);
}

void procedimentoComVarNormal()
{
    int variavelNormal = 0;
    printf("Valor da variavel normal = %d\n", variavelNormal++);
}

int main()
{
    printf("Exemplo de variavel estatica local:\n");
    procedimentoComVarEstatica();
    procedimentoComVarEstatica();
    procedimentoComVarEstatica();

    printf("Exemplo de variavel normal local:\n");
    procedimentoComVarNormal();
    procedimentoComVarNormal();
    procedimentoComVarNormal();

    return 0;
}