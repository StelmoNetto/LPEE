#include <stdio.h>
#include <math.h>

int main()
{
    printf("fabs(-12.5)    = %.1f\n", fabs(-12.5));
    printf("copysign(3,-1) = %.0f\n", copysign(3, -1));
    printf("fdim(8,5)      = %.0f\n", fdim(8, 5));

    return 0;
}