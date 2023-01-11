#include <stdio.h>

int main()
{  int i, soma;
  i=2;
  soma=0;
    while(i<=1000)
    {
      soma=soma+i; //operação acumulativa
      i=i+2;
    }
  printf("O valor da expressão 2 + 4 + 6 + 8 + ... 998 + 1000 =  %d", soma);
  
  return 0;
  
}
