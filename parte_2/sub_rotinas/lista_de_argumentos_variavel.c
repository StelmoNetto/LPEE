#include <stdarg.h>
#include <stdio.h>
void exibeParametrosVariados(const char* formatacao, ...){
    va_list args; //Armazena os argumentos
    va_start(args, formatacao); //Habilita o acesso
    while (*formatacao != '\0'){
        if (*formatacao == 'd'){
            int i = va_arg(args, int); //Extrai um argumento
            printf("%d\n", i);
        }
        else if (*formatacao == 'c'){
            // Notar a conversão automática para tipo integral
            int c = va_arg(args, int);
            printf("%c\n", (char)c);
        }
        else if (*formatacao == 'f'){
            double d = va_arg(args, double);
            printf("%f\n", d);
        }
        ++formatacao;
    }
    va_end(args); //Finaliza
}
int main(){
    exibeParametrosVariados("dcff", 3, 'a', 1.999, 42.5);
    return 0;
}
