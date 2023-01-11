#include <stdio.h>
#include <math.h>

int main() 
{ //números reais usar float
  float i, soma;
  i=1;
  soma=0;
    while(i<=10)
    {
      soma=soma+1/pow(2,i); //operação acumulativa + pow() lembrar que tem que colocar a biblioteca de matemática.
      i=i+1;
    }
  printf("O valor da expressão 1/2 + 1/4 + 1/8 + 1/16 + 1/32 + .. + 1/1024  = %.3f", soma);
  
  return 0;

  }