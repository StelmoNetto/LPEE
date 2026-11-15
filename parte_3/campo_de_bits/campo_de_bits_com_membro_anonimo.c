#include<stdio.h>

int main()
{
    struct MeuCampoDeBits
    {
        unsigned campo1 : 3; //3 bits
        unsigned campo2 : 2; //2 bits
        unsigned        : 0; //Campo anônimp e 0 força o alinhamento para o próximo campo
        unsigned campo3 : 10; //10 bits - Próximo 16 bits do short
    };

    struct MeuCampoDeBits campos = {3};
    printf("Campo1 = %u\n",campos.campo1);
    printf("Campo2 = %u\n",campos.campo2);
    printf("Campo3 = %u\n",campos.campo3);
}