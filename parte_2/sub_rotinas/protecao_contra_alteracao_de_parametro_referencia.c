#include <stdio.h>

void exibir(const char* mensagemDeFormatacao, const double* ptrParaValor)
{
    //*ptrParaValor = 1.4; //Erro: protegido contra alterações
    printf(mensagemDeFormatacao, *ptrParaValor);
}

int main()
{
    double pesoEmKg = 3.2;
    
    exibir("Peso = %.1f kg", &pesoEmKg);
}
