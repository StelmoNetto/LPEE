#include<stdio.h>
#include<stdalign.h>

struct __attribute__((aligned(4))) fooM {//Ignorado - menor que os dos membros
  alignas(2) char a; //Alinhamento dos membros (ignorado)
  alignas(8) int b; //Alinhamento usado (maior)
};

int main()
{
    printf("alignof(char) = %zu\n",alignof(char));
    printf("alignof(int) = %zu\n",alignof(int));
    printf("alignof(int*) = %zu\n",alignof(int*));
    printf("alignof(int[4]) = %zu\n",alignof(int[4]));
    printf("alignof(fooM) = %zu\n",alignof(struct fooM));
}