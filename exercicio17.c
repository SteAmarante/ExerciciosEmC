#include <stdio.h>
#include <math.h>

int main() 
{ // criar uma váriavel
  int n1, i=1;
  { //pedir ao usuário um numero inteiro
    printf("Tabuada de qual número? ");
    scanf("%d", &n1);
  }
  while(i<=10) //estrutura para a realização da tabuada
    {
      printf("%d x %d = %d\n", n1, i, i*n1);
      i=i+1;
    }
  return 0;
}