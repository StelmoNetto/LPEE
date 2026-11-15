#include<stdio.h>

struct foo1 //tamanhoEmBytes = 1, alinhamentoEmBytes = 1
{
  char a;
};

struct foo2 //tamanhoEmBytes = 2, alinhamentoEmBytes = 1
{
  char a, b;
};

struct foo3 //tamanhoEmBytes = 8, alinhamentoEmBytes = 4
{
  char a;
  int b;
};

//O registro foo3 transforma-se em:
struct foo3_
{
  char a; // 1 byte
  char _pad0[3]; // 3 bytes de preenchimento
  int b; // 4 bytes
};

int main()
{
    printf("Tamanho(foo1) = %zu bytes\n",sizeof(struct foo1));
    printf("Alinhamento(foo1) = %zu bytes\n\n",alignof(struct foo1));

    printf("Tamanho(foo2) = %zu bytes\n",sizeof(struct foo2));
    printf("Alinhamento(foo2) = %zu bytes\n\n",alignof(struct foo2));

    printf("Tamanho(foo3) = %zu bytes\n",sizeof(struct foo3));
    printf("Alinhamento(foo3) = %zu bytes\n\n",alignof(struct foo3));

    printf("Tamanho(foo3_) = %zu bytes\n",sizeof(struct foo3_));
    printf("Alinhamento(foo3_) = %zu bytes\n\n",alignof(struct foo3_));
}