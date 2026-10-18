#include <stdio.h>

#define IDENTIFICAR_TIPO(x) _Generic((x), \
    int: "Tipo Inteiro (int)", \
    float: "Tipo Ponto Flutuante (float)", \
    double: "Tipo Double", \
    char*: "Ponteiro para Caractere (string)", \
    default: "Outro tipo" \
)

int main() {
    int a = 10;
    double b = 5.5;
    
    printf("%s\n", IDENTIFICAR_TIPO(a)); // Imprime Tipo Inteiro (int)
    printf("%s\n", IDENTIFICAR_TIPO(b)); // Imprime Tipo Double
    return 0;
}