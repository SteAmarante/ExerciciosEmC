#include <stdio.h>

int main() 
{ // criar duas váriaveis com numeros reais
  float r, d;
  // solicitar o valor do real a ser convertido
  printf("Valor do dinheiro a ser convertido (BRL): ");
  scanf("%f", &r);
  // calculo da conversão d = r/5.19
  d = r/5.19;
  // o valor convertido em dolares é de 
  printf("O valor em dólares é de USD %.2f", d);
  return 0;
}