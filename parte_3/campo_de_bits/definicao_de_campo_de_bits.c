#include<stdio.h>

int main()
{
    struct MeuCampoDeBits
    {
        unsigned short campo1 : 3; //3 bits - Recomenda-se ser sempre um inteiro não sinalizado
        unsigned short campo2 : 2; //2 bits
        unsigned short campo3 : 10; //10 bits
    };

    struct MeuCampoDeBits campos = {3,1,12};
    campos.campo3 = 20;
    printf("Campo1 = %u\n",campos.campo1);
    printf("Campo2 = %u\n",campos.campo2);
    printf("Campo3 = %u\n",campos.campo3);
}