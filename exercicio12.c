#include <stdio.h>
#include <math.h>

int main() 
{ // criar cinco variáveis de números reais
  float a, b, c, p, area;
  
  //solicitar que o usuário insira três números Lados: a, b, c
  printf("Coloque o valor do lado A: ");
  scanf("%f", &a);
  printf("Coloque o valor do lado B: ");
  scanf("%f", &b);
  printf("Coloque o valor do lado C: ");
  scanf("%f", &c);
  
  //realizar o cálculo do triângulo Semiperímetro: p = (a+b+c)/2 e também o da Área = raiz_quadrada(p* (p-a) * (p-b) * (p-c))
  p = (a+b+c)/2;
  area = sqrt(p* (p-a) * (p-b) * (p-c));

  // o resultado é 
  printf("O valor da área é de %f\n o Valor do semiperimetro é de %.1f", area, p);
}