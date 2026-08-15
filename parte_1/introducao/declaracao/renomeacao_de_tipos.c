#include <stdint.h>
int main() 
{
	typedef double real;
	real numero = 3.14; //real é um apelido para double

	typedef uint8_t byte;
	byte registro = 0b1100'0111;

	typedef enum Estado {
		ESTADO_DESLIGADO,
		ESTADO_LIGADO
	} estado_t; //É recomendado terminar com _t para indicar que é um tipo

	// Formas de declarar:
	enum Estado motor1 = ESTADO_DESLIGADO; // Forma antiga
	estado_t    motor2 = ESTADO_LIGADO;    // Forma com apelido (Recomendada)

	return 0;
}