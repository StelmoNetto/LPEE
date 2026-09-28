#include<stdio.h>
#include<stdlib.h>

int main(){
    size_t tamanho = 10;
    float *vetor = (float *)calloc(tamanho, sizeof(float));

    if(!vetor){ 
        puts("Erro: Memória insuficiente"); 
	exit(EXIT_FAILURE);
    }

    for(int i = 0; i < tamanho; ++i) 
    {
        *(vetor + i) = i;
        printf("vetor[%d] = %f\n",i,vetor[i]);
    }
    
    //Compressão - não apaga os dados
    size_t novoTamanho = 5;
    vetor = realloc(vetor, novoTamanho * sizeof(float));

    if(!vetor){ 
        puts("Erro: Memória insuficiente"); 
	exit(EXIT_FAILURE); 
    }

    puts("Compressão - não apaga os dados:");
    for(int i = 0; i < novoTamanho; ++i) 
    {
        printf("vetor[%d] = %f\n",i,vetor[i]);
    }

    //Expansão - copia os dados anteriores para o novo bloco
    novoTamanho = 15;
    vetor = realloc(vetor, novoTamanho * sizeof(float));

    if(!vetor){ 
        puts("Erro: Memória insuficiente"); 
	exit(EXIT_FAILURE); 
    }

    puts("Expansão - copia os dados anteriores para o novo bloco:");
    for(int i = 0; i < novoTamanho; ++i) 
    {
        printf("vetor[%d] = %f\n",i,vetor[i]);
    }

    free(vetor);
}