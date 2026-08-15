#include <stdio.h>
#include <math.h>

int main()
{
	const double PI = 3.141592653589793;

    printf("sin(pi/2) = %.0f\n", sin(PI / 2));
    printf("cos(0)    = %.0f\n", cos(0));
    printf("tan(pi/4) = %.0f\n", tan(PI / 4));

    printf("asin(1) = %.4f\n", asin(1));
    printf("acos(1) = %.4f\n", acos(1));
    printf("atan(1) = %.4f\n", atan(1));
    printf("atan2(1,1) = %.4f\n", atan2(1, 1));

    return 0;
}