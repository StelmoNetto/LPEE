#include <stdio.h>
#include <math.h>

int main()
{
    printf("sinh(1) = %.4f\n", sinh(1));
    printf("cosh(1) = %.4f\n", cosh(1));
    printf("tanh(1) = %.4f\n", tanh(1));

    printf("asinh(1)      = %.4f\n", asinh(1));
    printf("acosh(2)      = %.4f\n", acosh(2));
    printf("atanh(0.5)    = %.4f\n\n", atanh(0.5));

    return 0;
}