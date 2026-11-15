#include<stdio.h>

struct foo4
{
  int a;
  char b;
  float c;
  double d;
  bool e;
};

struct foo4_
{
  int a; // 4 bytes
  char b; // 1 byte
  char _pad0[3]; // 3 bytes de preenchimento
  float c; // 4 bytes
  char _pad1[4]; // 4 bytes de preenchimento
  double d; // 8 bytes - MAIOR
  bool e; // 1 byte
  char _pad2[7]; // 7 bytes de preenchimento
}; //para fazer a struct multiplo de 8

int main()
{
    printf("Tamanho(foo4) = %zu bytes\n",sizeof(struct foo4));
    printf("Alinhamento(foo4) = %zu bytes\n\n",alignof(struct foo4));

    printf("Tamanho(foo4_) = %zu bytes\n",sizeof(struct foo4_));
    printf("Alinhamento(foo4_) = %zu bytes\n\n",alignof(struct foo4_));
}