#include <stdio.h>

int main() 
{
  // definir as 4 váriaveis 
  float frente, direita, esquerda;
  // colocar a distancia que quer que o carro percorra
  printf("Insira a distancia a ser percorrida pelo carro: ");
  scanf("%f", &frente);

  // definir os comandos posteriores a disfancia informada. Esta proximo
  if (frente > 50)
  {
    printf("Frente");
  }
    else
  {
    printf("Insira a distância para à direita: ");
    scanf("%f", &direita);
    if (direita > 50)
    {
      printf("Virar à direita");
    }
      else
      {
        printf("Insira a distancia para à esquerda: ");
        scanf("%f", &esquerda);
        if (esquerda > 50)
        {
          printf("Virar à esquerda");
        }
      }
  }
  return 0;
}