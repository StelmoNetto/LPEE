#include <stdio.h>
int main() {
	int a = 1, b = 2, c = 3; //é possível: a = 1, b = a, c = b;
	int resultado = (a, b, c); // Equivalente a: "a; b; resultado = c;"
	printf("resultado = %d\n", resultado); // Saída: 3

    int x;
    // Altera 'x', faz uma conta e atribui o resultado final (35) a 'x'
    x = (x = 5, x + 30);
    printf("x = %d\n", x); // Saída: 35
	//Precedência do operador vírgula é menor que a do operador de atribuição
	x = 1, 2; //x = 1 e a expressão 2 é descartada
	x = (1, 2); //Avalia 1, avalia 2, e atribui o 2 a x
}