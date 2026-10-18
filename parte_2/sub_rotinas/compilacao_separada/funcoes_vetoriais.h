#ifndef FUNCOES_VETORIAIS_H
#define FUNCOES_VETORIAIS_H

#include <stdio.h>

//Todas as constantes, declarações, protótipos etc são declaradas aqui.
//Ninguém precisa saber como foram implementadas. Devem apenas usá-las.

#define PRECISAO_DE_SAIDA 3

void lerVetor(float* vetor, size_t n);

void exibirVetor(const float* vetor, size_t n);

float mediaDe(const float vetor[], size_t n);

#endif // FUNCOES_VETORIAIS_H
