#include <stdio.h>

int main()
{
    const float VELOCIDADE_DE_ATENCAO_KM_POR_H = 55.0f;
    const float VELOCIDADE_MAXIMA_KM_POR_H = 80.0f;
    float velocidadeKmPorH;

    puts("Qual a sua velocidade em km/h?\n");
    if (scanf("%f", &velocidadeKmPorH) != 1)
    {
        puts("Erro ao ler a velocidade");
        return 1;
    }

    if (velocidadeKmPorH > VELOCIDADE_DE_ATENCAO_KM_POR_H)
    {
        // Só chega aqui caso seja verdadeiro
        if (velocidadeKmPorH > VELOCIDADE_MAXIMA_KM_POR_H)
        {
            puts("Acima do limite da via!");
        }
        else // velocidadeKmPorH <= VELOCIDADE_MAXIMA_KM_POR_H
        {
            puts("Atenção! Velocidade próxima do limite");
        } // termina o 2º if
    } // termina o 1º if
    return 0;
}
