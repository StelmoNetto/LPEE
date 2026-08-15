#include <stdio.h>
#include <stdint.h>
int main() {
	uint8_t b1 = 0b11101110; // 238
	uint8_t b2 = 0b10110101; // 181

	uint8_t b1Eb2 = b1 & b2; // 0b10100100 = 164
	printf("%u & %u = %u\n", b1, b2, b1Eb2);

	uint8_t b1OUB2 = b1 | b2; // 0b11111111 = 255
	printf("%u | %u = %u\n", b1, b2, b1OUB2);

	uint8_t b1XORB2 = b1 ^ b2; // 0b01011011 = 91
	printf("%u ^ %u = %u\n", b1, b2, b1XORB2);

	uint8_t b1NOT = ~b1; // 0b00010001 = 17
	printf("~%u = %u\n", b1, b1NOT);
}