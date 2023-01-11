#include <stdio.h>

int main() 
{
  float d, r;
  printf("Coloque o valor em dólares: ");
  scanf("%f", &d);
  r = d*5.19;
      printf("O valor em reais é %.1f BRL", r);
  return 0;
}