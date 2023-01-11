#include <stdio.h>

int main()
{
  //declarar as vaviaveis 
  int i, n1, soma=0;
  // pedir para o usuário inserir um numero inteiro
  printf("Insira um número: ");
  scanf("%d", &n1);
  // looping, equação e impressão
  for(i=1; i<=n1; i=i+1)
  {  soma = soma+i*i;
  }
  printf(" A soma dos quadrados é %d ", soma);
    
  return 0;
}