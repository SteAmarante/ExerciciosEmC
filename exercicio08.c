#include <stdio.h>
#include <math.h>

int main() 
{ //criar três variáveis para o raio, area e circunferencia em números reais
  float raio, area, circunferencia;
  // pedir para o usuário o valor do raio
  printf("Insira o valor do Raio: ");
  scanf("%f", &raio);
  // realizar o cálculo da área e da circunferencia /Área = PI  * raio² e a  Circunferência = 2 * PI * raio
  area = M_PI*(raio*raio); //Colocar a constante M_PI e tem que ter a biblioteca matemática
  circunferencia = 2*M_PI*raio;
  //resultado da área e da circunferencia
  printf("Área é de %f\n Circunferencia é de %f", area, circunferencia);
  return 0;
}