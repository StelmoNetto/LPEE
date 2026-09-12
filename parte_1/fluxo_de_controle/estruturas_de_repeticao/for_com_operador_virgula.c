#include <stdio.h>

int main() {
    for(int numero = 0, contador = 0; numero < 4; ++contador, numero+= 2)
    {
        printf("numero = %d contador = %d\n", numero, contador);
    }
    return 0;
}
