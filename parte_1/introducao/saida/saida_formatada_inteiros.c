#include <stdio.h>

int main() {
    _Bool b = 1;
    char c = 'A';
    short s = 12;
    int i = 345;
    long l = 6789L;
    long long ll = 123456LL;

    // 1. Preenchimento Padrão (Espaços em branco à esquerda, largura 10)
    printf("--- Padrão (Largura 10) ---\n");
    // _Bool é promovido para int no printf.
    printf("Bool:%10d\n", b); //Bool:         1
    printf("Char:%10c\n", c); //Char:         A

    // 2. Preenchimento com Zeros (Largura 10)
    printf("--- Preenchimento com Zeros ---\n");
    printf("Short:%010hd\n", s); //Short:0000000012
    printf("Int:%010d\n", i); //Int:0000000345

    // 3. Alinhamento à Esquerda (Sinal de menos '-', largura 10)
    printf("--- Alinhamento à Esquerda ---\n");
    printf("Long:%-10ld|\n", l); //Long:6789      |
    printf("Long Long:%0-10lld|\n", ll); //Long:6789      |

    return 0;
}
