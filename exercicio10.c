#include <stdio.h>

int main() 
{
  //criar 3 variaveis
float base, altura, area;
  //pedir valor da base e da altura
printf("valor da base = ");
  scanf("%f", &base);
  printf("valor da altura = ");
  scanf("%f", &altura);
  //calcular area
  area = (base*altura)/2; 
  //imprimir valor da área
  printf("Área = %1.f", area);
  //área = (base*altura)/2
  return 0;
}