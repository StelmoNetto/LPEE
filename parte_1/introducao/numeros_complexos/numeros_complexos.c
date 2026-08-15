#include <stdio.h>
#include <complex.h> // Cabeçalho obrigatório para suporte a complexos
int main() {
	// 1. FORMAS DE DECLARAÇÃO E INICIALIZAÇÃO
	double complex z1 = 3.0 + 4.0 * I; // Forma clássica com a constante 'I'
	double complex z2 = CMPLX(1.5, -2.5); // Macro do C11 (mais segura para zeros/infinitos)
	double complex soma, produto;

	// Variáveis auxiliares para leitura (entrada)
	double parteReal, parteImaginaria;
	printf("--- Inicializacoes Padrao ---\n");
	printf("z1 inicializado: %.2f + %.2fi\n", creal(z1), cimag(z1));
	printf("z2 inicializado: %.2f + %.2fi\n\n", creal(z2), cimag(z2));

	// 2. FORMA DE ENTRADA (LEITURA)
	printf("Digite a parte real e imaginaria do complexo (separadas por espaco): ");
	scanf("%lf %lf", &parteReal, &parteImaginaria);

	// Construção do número complexo a partir da entrada do usuário
	double complex z3 = CMPLX(parteReal, parteImaginaria);

	// 3. OPERAÇÕES MATEMÁTICAS NATIVAS
	soma = z1 + z3;
	produto = z1 * z3;

	// 4. FORMA DE SAÍDA (IMPRESSÃO)
	printf("\n--- Resultados ---\n");

	// Exibição usando creal() e cimag() para extrair as partes
	printf("z3 (Digitado):  %.2f + %.2fi\n", creal(z3), cimag(z3));
	printf("Soma (z1 + z3): %.2f + %.2fi\n", creal(soma), cimag(soma));
	printf("Prod (z1 * z3): %.2f + %.2fi\n", creal(produto), cimag(produto));
}
