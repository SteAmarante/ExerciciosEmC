#include <stdio.h>
#include <math.h>

int main() 
{ // criar duas váriaveis de números reais para temperatura
  float f, c;
  //pedir para o usuário colocar a temperatura em Fahrenheit
  printf("Coloque a temperatura em Fahrenheit: ");
  scanf("%f", &f);
  // realizar o cálculo de conversão C = (F-32)*5/9
  c = (f-32)*5/9;
  //resultado
  printf("A temperatura em Celcius é de %.1f", c);
  return 0;
}