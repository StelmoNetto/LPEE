#include<stdio.h>

#define TAMANHO 3

int main(){
    short vetor[TAMANHO] = {2,5,4};

    printf("&vetor[0] == vetor ? %d\n", &vetor[0] == vetor);

    printf("vetor[0] = %hd\n", *vetor);
    printf("vetor[1] = %hd\n", *(vetor + 1));
    printf("vetor[1] = %hd\n", *(vetor + 2));
}
