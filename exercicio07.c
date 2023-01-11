#include <stdio.h>
#include <math.h>

int main() 
{
  //criar 4 variáveis base, altura, área e perímetro em números reais
  float b, h, a, p;
  //pedir base e altura do triagulo para o usuário
  printf("Valor da base: ");
  scanf("%f", &b);
  printf("Valor da altura: ");
  scanf("%f", &h);
  //calcular area e perimetro Área = base * altura / Perímetro = 2 * (base + altura) ou 2 * base + 2 * altura
  a = b*h;
  p = 2*(b+h);
  // imprimir resultado
  printf("A Área é %f", a);
  printf("O Perímetro é %f", p);
  return 0;
}