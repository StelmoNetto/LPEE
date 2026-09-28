#include<stdio.h>
#include<stdlib.h>

int main(){
    double* dadoAlocado = (double *)calloc(1, sizeof(double));

    if(!dadoAlocado)
    {
        puts("Erro: Memória insuficiente");
        exit(EXIT_FAILURE);
    }

    *dadoAlocado = 1.4;

    free(dadoAlocado);

    size_t numeroDeCaracteres = 10;
    char *cadeia = (char *)calloc(numeroDeCaracteres + 1, sizeof(char));

    if(!cadeia)
    {
        puts("Erro: Memória insuficiente");
        exit(EXIT_FAILURE);
    }    

    printf("cadeia[0] = %d",cadeia[0]);

    free(cadeia);
}