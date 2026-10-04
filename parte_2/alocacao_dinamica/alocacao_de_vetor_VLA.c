#include<stdio.h>

int main()
{
    unsigned tamanho;

    puts("Qual o tamanho do vetor\n");
    scanf("%u",&tamanho);
    if(tamanho == 0) { puts("Tamanho incorreto!"); return 1; }
    float vetor[tamanho];
    vetor[0] = 1.4f;

    double matriz[tamanho][tamanho];
    matriz[0][0] = 0.0;
}