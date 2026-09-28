#include <stdio.h>
#include <stdlib.h>

int main() {
    int f = 6515641; //0110 0011 0110 1011 1011 1001

    char* ptrChar = (char*)&f;

    printf("%hhd\n", *ptrChar); //-71 - 1011 1001

    return 0;
}