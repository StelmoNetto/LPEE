#ifndef FUNCOES_VETORIAIS_H
#define FUNCOES_VETORIAIS_H

#include <stdio.h>

//Todas as constantes, declarações, protótipos etc são declaradas aqui.
//Ninguém precisa saber como foram implementadas. Devem apenas usá-las.

extern char inicioDoVetor, fimDoVetor; // Apenas declaração. Não aloca memória.

#define PRECISAO_DE_SAIDA 3

void lerVetor(float* vetor, size_t n);

void exibirVetor(const float* vetor, size_t n);

inline float mediaDe(const float vetor[], size_t n)
{
    float media = 0.0f;
    for (size_t i = 0; i < n; i++)
        media += vetor[i];

    return media / n;
}

extern void exibeMedia(const float vetor[], size_t n);

#endif // FUNCOES_VETORIAIS_H

