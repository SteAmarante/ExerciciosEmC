#include <stdio.h>
#include <math.h>  //por causa do pow e sqrt
int main()
{   float cateto1, cateto2, hipotenusa; //var. reais
    printf("Entre com um cateto: ");
    scanf("%f", &cateto1); // %f = real
    printf("Entre com outro cateto: ");
    scanf("%f", &cateto2);
    hipotenusa = sqrt(cateto1*cateto1 + pow(cateto2, 2));
    printf("A hipotenusa mede %f", hipotenusa);
    return 0;
}
