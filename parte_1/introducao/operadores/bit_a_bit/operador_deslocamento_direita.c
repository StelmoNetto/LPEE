#include <stdio.h>

int main()
{
    int x = 10; //(0b0000'1010)
    int z = x >> 1; //Equivalente a: z = 10 / 2¹ = 5 (0b0000'0101)
    printf("%d\n", z); //5

    z = x >> 2; //Equivalente a: z = 10 / 2² = 2 (0b0000'0010)
    printf("%d\n", z); //2

    return 0;
}
