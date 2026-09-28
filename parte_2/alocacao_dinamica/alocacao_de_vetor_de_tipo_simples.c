#include <stdio.h>
#include <stdlib.h>
#include <errno.h>   // Essencial para errno e ENOMEM
#include <string.h>  // Essencial para strerror

int main() {
    size_t numeroDeElementos; 
    puts("Entre com o número de elementos do vetor");
    scanf("%zu",&numeroDeElementos);
    
    // Antes de chamar uma função que altera o errno, é uma boa prática zerá-lo
    errno = 0; 

    int *vetor = (int *)malloc(numeroDeElementos * sizeof(int));

    if (vetor == NULL) {
        printf("Falha na alocação de memória!\n");
        printf("Erro reportado: %s\n", strerror(errno));
        return EXIT_FAILURE;
    }

    //Usando o vetor alocado
    vetor[0] = 4;
    vetor[1] = 1;
    
    free(vetor); //Desalocando memória do vetor
    return EXIT_SUCCESS;
}