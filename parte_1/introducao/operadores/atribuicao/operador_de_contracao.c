#include <stdio.h>

int main()
{
    float x = 5.0f;

    x = x + 2.0f;
    printf("x = %g\n", x);

    x = 5.0f;

    x += 2.0f;
    printf("x = %g\n", x);

    x = 5.0f;
    float y = 2.5f;

    x = x / y;
    printf("x = %g\n", x);

    x = 5.0f;
    y = 2.5f;

    x /= y;
    printf("x = %g\n", x);

    return 0;
}
