#include <stdio.h>

typedef float (*TipoDaFuncao)(float);

float fDeX(float x) { return x * x; }

_Bool trocaDeSinalNoIntervalo(float a, float b, TipoDaFuncao funcao) //funcao é um ponteiro para uma função (fDeX) que retorna um float e possui um parâmetro float
{
    return (funcao(a) * funcao(b)) < 0;
}

int main()
{
    printf("Trocou sinal: %s\n", trocaDeSinalNoIntervalo(1, 2, fDeX) ? "Sim" : "Não");
    return 0;
}