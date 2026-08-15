#include <stdio.h>
#include <math.h>

int main()
{
    //Arredonda para cima
    printf("ceil(3.2)  = %.0f\n", ceil(3.2));
	
    //Arredonda para baixo
    printf("floor(3.8) = %.0f\n", floor(3.8));
	
    //Arredonda para o inteiro mais próximo
    printf("round(3.5) = %.0f\n", round(3.5));

	//Trunca o número, removendo a parte decimal
    printf("trunc(3.9) = %.0f\n", trunc(3.9));

    return 0;
}