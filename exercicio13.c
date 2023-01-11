#include <stdio.h>
#include <math.h>

int main() 
{  
  // criar 5 váriaveis
  float N1, N2, N3, maior, menor, media;
  
  // pedir ao usuário que insira 3 notas com números reais e a maior e a menor nota. 
  printf("Insira as três notas: ");
  scanf("%f", &N1);
  scanf("%f", &N2);
  scanf("%f", &N3);
  maior = N1;
  menor = N1;

  //definir qual a maior/menor e qual a maior nota 2
  if (N2 > maior) 
  {
    maior = N2;
  }
  if (N2 < menor)
  {
    menor = N2;
  }
  
  //definir qual a maior/menor e qual a maior nota 3
  if (N3 > maior)
  {
    maior = N3;
  }
  if (N3 < menor)
  {
    menor = N3;
  }
  
  // cálcular a média
  media = (maior+menor) / 2;

  //Imprimir qual é a nota final
  printf("A nota final é: %.1f", media);
  
  return 0;
}