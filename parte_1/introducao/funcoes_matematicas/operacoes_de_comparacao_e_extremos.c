#include <stdio.h>
#include <math.h>

int main()
{
    printf("fmax(3,8) = %.0f\n", fmax(3, 8));
    printf("fmin(3,8) = %.0f\n", fmin(3, 8));

    printf("isgreater(5,2) = %d\n", isgreater(5, 2));
    printf("isless(5,2)    = %d\n", isless(5, 2));

    return 0;
}