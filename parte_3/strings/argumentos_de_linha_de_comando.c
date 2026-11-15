#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Quantidade de argumentos (argc) = %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    printf("argv[%d] = %s\n", argc, argv[argc] == NULL ? "NULL" : "não nulo");
    
    return 0;
}