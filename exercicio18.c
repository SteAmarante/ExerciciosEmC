#include <stdio.h>

int main()
{
  int i, soma=0; //toda váriavel que tem aspecto acumulativo, precisa ser inicializado do 0
  //lloping e impressão
  for(i=1; i<=100; i=i+1)
    soma = soma+i;
    {
      printf("A soma total de 1 até 100 é de %d ", soma);
    }
  return 0;
}