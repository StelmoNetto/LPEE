#include <stdio.h>

int main() {
    int numero = 0;

    // Lê o número e valida se ele é diferente de -1 na mesma linha
    while (printf("Digite um numero (-1 para sair): "), scanf("%d", &numero), numero != -1)
    {
        printf("Voce digitou: %d\n", numero);
    }
    return 0;
}
