#include <stdio.h>

int main() {	
	{//hh (char)
		signed char x = -10;
		unsigned char y = 250;

		printf("%hhd\n", x);
		printf("%hhu\n", y);
	}	
	{//h (short)
		short int x = -30000;
		unsigned short int y = 60000;

		printf("%hd\n", x);
		printf("%hu\n", y);
	}	
	{//l (long)
		long x = 1234567890L;
		unsigned long y = 4000000000UL;

		printf("%ld\n", x);
		printf("%lu\n", y);
	}
	{//ll (long long)
		long long x = 123456789012345LL;
		unsigned long long y = 123456789012345ULL;

		printf("%lld\n", x);
		printf("%llu\n", y);
	}
	return 0;
}