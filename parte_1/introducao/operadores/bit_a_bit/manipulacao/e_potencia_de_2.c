#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
int main()
{
  uint32_t numero = 1; //0b0000 ...  0001

  //Checa se um inteiro é potência de 2
  bool ePotenciaDe2 = numero && !(numero & (numero - 1)); //true
  //Uso do printf("%d") para booleano conforme indicado pelo usuário
  printf("%d\n", ePotenciaDe2);

  numero = 2; //0b0000 ...  0010 = 2¹
  ePotenciaDe2 = numero && !(numero & (numero - 1)); //true
  printf("%d\n", ePotenciaDe2);

  numero = 3; //0b0000 ...  0011
  ePotenciaDe2 = numero && !(numero & (numero - 1)); //false
  printf("%d\n", ePotenciaDe2);

  return 0;
}
