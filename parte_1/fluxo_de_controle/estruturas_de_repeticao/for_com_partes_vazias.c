#include <stdio.h>

int main() {
    int contador = 0;
    for( ; ; )
    {
        printf("contador = %d\n", contador++);

        if(contador == 10) break;
    }
    return 0;
}
