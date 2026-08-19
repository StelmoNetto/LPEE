#include <stdio.h>

int main()
{
    for (int t = 0; t < 100; ++t)
    {
        printf("%d\n", t);

        if (t == 10)
            break;
    }
    return 0;
}
