#include<stdio.h>

#define LOG_ERRO(msg) \
    do { \
        fprintf(stderr, "[ERRO] "); \
        fprintf(stderr, msg); \
    } while (0)

int main(){
    LOG_ERRO("Valor não permitido!");
}
