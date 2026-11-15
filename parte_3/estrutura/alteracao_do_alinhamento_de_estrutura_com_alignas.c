#include<stdio.h>
#include<stdalign.h>

struct __attribute__((aligned(4))) foo { //Alinhamento de 4 bytes
  char a;
  char b;
};

int main()
{
    printf("Tamanho(foo) = %zu bytes\n",sizeof(struct foo));
    printf("Alinhamento(foo) = %zu bytes\n\n",alignof(struct foo));
}