#include <stdio.h>
#include <stdint.h>
int main()
{
  uint32_t numero = 3U;  //0b0000  ... 0011

  //Limpa o bit ativo mais à direita (não sinalizados)
  uint32_t resultado = numero & (numero - 1);  //0b0000  ... 0010
  printf("%u\n", resultado);

  numero = resultado;  //0b0000  ... 0010
  resultado = numero & (numero - 1);  //0b0000  ... 0000
  printf("%u\n", resultado);

  return 0;
}
