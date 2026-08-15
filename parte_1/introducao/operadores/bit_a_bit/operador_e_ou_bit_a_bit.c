#include <stdio.h>

typedef unsigned char byte;

int main()
{
		byte b1 = 0b11101110; // b1{ 238d }
		byte b2 = 0b10110101; // b2{ 181d }

		byte b1Eb2 = b1 & b2; 
		printf("%d\n", (int)b1Eb2); //164

		byte b1OUb2 = b1 | b2; 
		printf("%d\n", (int)b1OUb2); //255

		return 0;
}
