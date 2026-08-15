#include <stdio.h>
#include <stdint.h>
int main()
{
  int numero = 3;  //0b0000  ...  0011
  uint32_t posicaoDoBit = 2;  //3º  bit

  const int LSB = 1;  //0b0000  ...  0001
  const int MASCARA = LSB << posicaoDoBit;  //0b0000  ...  0001 << 2 = 0b0000  ...  0100

  //Isola (seleciona) um bit – na sua posição
  int resultado = numero & MASCARA;  //0b0000  ...  0000 - bit está na posição isolada
  printf("%d\n", resultado);

  return 0;
}
