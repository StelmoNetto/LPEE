#include <stdbool.h>

int main()
{
    _Bool desligado = 0; //falso
    desligado = 3; //verdadeiro

    //Incluir biblioteca stdbool.h
    bool ligado \
        = false; //falso
    ligado = 0; //falso

    ligado = true; //verdadeiro
    ligado = 5; //verdadeiro


    return 0;
}