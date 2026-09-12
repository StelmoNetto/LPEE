#include <stdio.h>

int main() {
    for(int x = 0, y = 0; x + y < 10; ++x)
    {
        y = getchar();
        y = y - '0';

        printf("y = %d\n", y);
    }
    return 0;
}
