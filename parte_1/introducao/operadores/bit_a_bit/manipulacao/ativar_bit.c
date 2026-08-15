#include <stdio.h>
#include <stdint.h>
int main()
{
  int numero = 3; //0b0000  ...  0011
  uint32_t posicaoDoBit = 2;  //3º  bit

  const int LSB = 1;  //0b0000  ...  0001
  int mascara = LSB << posicaoDoBit;  //0b0000  ...  0100

  //Ativa um bit em posicaoDoBit
  int resultado = numero | mascara; //0b0000  ...  0111
  printf("%d\n", resultado);

  return 0;
}
