#include <stdio.h>

#define ABS(a) (a) < 0 ? -(a) : (a)

int main()
{
    float x = -1.4f;
    printf("|%f| = |%f| e |-2| = %d",x, ABS(x), ABS(-2));
    return 0;
}