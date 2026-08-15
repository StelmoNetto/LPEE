#include <stdio.h>
int main() {
	float z = (float)1 / 5; //casting de 1 inteiro para float
	float v = 1 / (float)5; //casting de 5 inteiro para float
	int x = 2 * (int)v; //casting de v float para inteiro
	int y = (int)(2 * v); //casting de float para inteiro

	printf("z = %f v = %f x = %d y = % d\n", z, v, x, y);

	return 0;
}