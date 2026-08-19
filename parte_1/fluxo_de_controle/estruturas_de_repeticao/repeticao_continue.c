#include <stdio.h>

int main()
{
    for (int t = 0; t < 15; ++t)
    {
        if (t < 10)
            continue; // Faz ele voltar e continuar o laço

        printf("%d\n", t);
    }
    return 0;
}
