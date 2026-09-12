#include <stdio.h>

int main() {
    for(int x = 0, y = 0; x + y < 10; ++x)
    {
        y = getchar();

        // Limpa o resto do buffer (incluindo o \n) até o fim da linha
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        y = y - '0';
        printf("y = %d\n", y);
    }
    return 0;
}
