#include <stdio.h>
#include <math.h>

int main()
{
    printf("isfinite(1.0)  = %d\n", isfinite(1.0));
    printf("isinf(INFINITY)= %d\n", isinf(INFINITY));
    printf("isnan(NAN)     = %d\n", isnan(NAN));
    printf("signbit(-5.0)  = %d\n", signbit(-5.0));

    return 0;
}