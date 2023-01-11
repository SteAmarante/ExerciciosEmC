#include <stdio.h>

int main() 
{ // criar 2 variáveis para números reais, por ser temperatura
  float c, f;
  //pedir a entrada de um número para o usuário
  printf("Coloque a temperatura em Celsius: ");
  scanf("%f", &c);
  // calcular F = 9*C/5 + 32
  f = 9*c/5 + 32;
  //RESULTADO
  printf("em graus Fahrenheit é de %.1f", f); //.1 mostra uma casa e arredonda
  return 0;
}