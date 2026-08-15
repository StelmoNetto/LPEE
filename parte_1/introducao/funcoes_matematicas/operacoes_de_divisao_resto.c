#include <stdio.h>
#include <math.h>

int main()
{
    double inteiro;

    printf("fmod(7,2)      = %.0f\n", fmod(7, 2));
    printf("remainder(7,2) = %.0f\n", remainder(7, 2));

    double frac = modf(3.14, &inteiro);

    printf("Inteira     = %.0f\n", inteiro);
    printf("Fracionaria = %.2f\n", frac);

    return 0;
}