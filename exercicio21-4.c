#include <stdio.h>
#include <math.h>

int main()
{ //criar váriavel de numeros reais.
  float i, soma;
  i=2;
  soma=0;

  while(i<=98)
    {
      soma=soma+1.0/i-1.0/(i+1);
      i=i+2;
    }
    soma=soma+1.0/100; // colocar 1.0 para sinalizar uma divisão real
    
  printf("Resultado da expressão = %.3f", soma);
  return 0;
}