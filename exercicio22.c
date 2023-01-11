#include <stdio.h>
#include <math.h>

int main() 
{
  //criar duas váriaveis de números inteiros
  int fat, n;

  //pedir ao usuário inserir um valor
  printf("Qual número você quer fatorar: ");
  scanf("%d", &n);

  //realizar o cálculo
  for(fat = 1; n > 1; n = n - 1)
  fat = fat * n;

  // resultado
  printf("Fatorial cálculádo é de: %d", fat);
  return 0;
}