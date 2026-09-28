#include<stdio.h>

int main()
{
    short dado = 42;
    short* p1 = &dado; //Nível 1 de indireção
    short** p2 = &p1;  //Nível 2 de indireção
    short*** p3 = &p2; //Nível 3 de indireção
    
    printf("&dado = %p\n",p1);    
    printf("&p1 = %p\n",p2);
    printf("&p2 = %p\n",p3);
}