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
        // O malloc falhou! Vamos checar o motivo:
        if (errno == ENOMEM) {
            puts("Erro específico detectado: Memória insuficiente no sistema (ENOMEM).\n");
        }

        // Duas formas automáticas de exibir essa mensagem em formato de texto:
        
        // Forma 1: Usando strerror() para converter o número em texto
        printf("Mensagem legível (Forma 1): %s\n", strerror(errno));

        // Forma 2: Usando perror() que imprime direto no fluxo de erro (stderr)
        // Ela adiciona o texto que você escolher antes da mensagem oficial do sistema
        perror("Mensagem legível (Forma 2) - Falha no malloc");

        return EXIT_FAILURE;
    }

    //Usando o vetor alocado
    vetor[0] = 4;
    vetor[1] = 1;
    
    free(vetor); //Desalocando memória do vetor
    return EXIT_SUCCESS;
}