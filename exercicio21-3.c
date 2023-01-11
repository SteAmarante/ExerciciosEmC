#include <stdio.h>
#include <math.h>

int main(void)
{ //criar váriavel de numeros reais.
  float i, soma;
  i=2;
  soma=0;

  while(i<=100)
    {
      soma=soma+1/i;
      i=i+1;
    }
   printf("O valor da expressão é %.3f ", soma);
  return 0;
}