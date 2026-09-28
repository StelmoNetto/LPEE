#include <stdio.h>
#include <stdlib.h>

int main() {
    int f = 6515641; //0110 0011 0110 1011 1011 1001
    void* ptrVoid = &f;

    char* ptrChar = ptrVoid;

    printf("%hhd\n", *ptrChar); //-71 - 1011 1001

    //printf("%hhd\n", *(++ptrChar)); //107 - 0110 1011

    printf("%hhd\n", *(ptrChar + 1)); //107 - 0110 1011

    //printf("%hhd\n", *(++ptrChar)); //99 - 0110 0011

    printf("%hhd\n", *(ptrChar + 2)); //99 - 0110 0011

    return 0;
}