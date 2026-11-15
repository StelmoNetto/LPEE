#include<stdio.h>
#include<stdalign.h>

struct __attribute__((aligned(4))) fooM {//Ignorado - menor que os dos membros
  alignas(2) char a; //Alinhamento dos membros (ignorado)
  alignas(8) int b; //Alinhamento usado (maior)
};

int main()
{
    printf("Tamanho(fooM) = %zu bytes\n",sizeof(struct fooM));
    printf("Alinhamento(fooM) = %zu bytes\n\n",alignof(struct fooM));
}