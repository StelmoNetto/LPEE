#include <stdio.h>
#include <math.h>

int main()
{
    printf("exp(1)     = %.4f\n", exp(1));
    printf("exp2(3)    = %.0f\n", exp2(3));

    printf("log(e)     = %.0f\n", log(exp(1)));
    printf("log10(100) = %.0f\n", log10(100));
    printf("log2(8)    = %.0f\n", log2(8));

    return 0;
}