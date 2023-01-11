#include <stdio.h>

int main()
{   int n; //criar uma variável

  //solicitar o numero ao usuário
    printf("Entre com um número iteiro: ");
    scanf("%d", &n);

  //fazer a verificação se positivo ou negativo e imprimir
    if(n>0)
    {   printf("Positivo");
    }
    else if(n<0)
    {   printf("Negativo");
    }
    else
    {   printf("Nulo");
    }
    return 0;
}
