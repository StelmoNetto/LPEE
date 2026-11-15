#include<stdio.h>

struct RegistroGrande
{
    float dados[100000];
};

void usaUmaCopiaDoRegistro(struct RegistroGrande umaCopia)
{
    //No parãmetro ocorreu:
    //umaCopia = r1;
}

int main()
{
    struct RegistroGrande r1;
    usaUmaCopiaDoRegistro(r1);
}