#include <stdio.h>
#include <math.h>

int main()
{ // criar três variáveis de números reais
  float a, p, c;

  // pedir a entrada da altura do usuário
  printf("Coloque a sua altura em metros separando com ponto: ");
  scanf("%f", &a);

  // pedir a entrada do peso do usuário
  printf("Coloque o seu peso em kg: ");
  scanf("%f", &p);

  // calcular o IMC
  c = p/pow(a, 2);

  // imprimir o resultado
  printf("O seu IMC é de %f", c);
  return 0;
}