#include <stdio.h>

void exibeDigitosPorLinha(size_t n)
{
    if(n >= 10)
    {
        exibeDigitosPorLinha(n  / 10);
    }
    printf("%zu\n", n % 10);
}

int main()
{
    exibeDigitosPorLinha(123);
}