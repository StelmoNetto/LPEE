#include <stdio.h>

int main()
{
    int x = 10; //(0b0000'1010)
    int z = x << 1; //Equivalente a: z = 10 * 2¹ = 20 (0b0001'0100)
    printf("%d\n", z); //20

    z = x << 2; //Equivalente a: z = 10 * 2² = 40 (0b0010'1000)
    printf("%d\n", z); //40

    return 0;
}
