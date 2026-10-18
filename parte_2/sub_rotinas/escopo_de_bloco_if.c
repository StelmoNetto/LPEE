#include <stdio.h>

int main(void)
{
    int i = 2;

    if (i > 0)
    {
        int variavelLocalAoIF = 3;
    }

    //Esse programa não executará propositalmente se variavelLocalAoIF for acessada fora do escopo
    printf("Não exibirá o valor de variavelLocalAoIF %d\n", variavelLocalAoIF);
 
    return 0;
}
