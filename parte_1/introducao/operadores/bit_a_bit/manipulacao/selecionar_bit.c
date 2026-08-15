#include <stdio.h>
#include <stdint.h>
int main()
{
  int numero = 3;  //0b0000  ...  0011
  uint32_t posicaoDoBit = 2;  //3º  bit

  const int LSB = 1;  //0b0000  ...  0001
  int numeroDeslocado = numero >> posicaoDoBit; //0b0000  ...  0011 >> 2 = 0b0000  ...  0000

  int bitSelecionado = numeroDeslocado & LSB; //bit isolado: 0
  printf("%d\n", bitSelecionado);

  return 0;
}
