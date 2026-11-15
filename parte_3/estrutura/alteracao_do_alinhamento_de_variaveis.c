#include<stdio.h>
#include<stdalign.h>

int main()
{
    alignas(8)   int a; //Preenche para completa 256
    alignas(256) long b[4];

    printf("&a = %p\n",&a);
    printf("&b[0] = %p\n",&b[0]);
    printf("|&a - &b| = |%p - %p| = %X",&a,&b[0],(char*)&a - (char*)&b[0]);
}