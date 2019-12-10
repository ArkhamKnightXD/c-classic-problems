#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial;

    int comprobador =1;

    printf("Digite el numero al que desea calcularle el factorial: ");
    scanf("%d", &factorial);

    for(int i = 1; i <= factorial; i = i + 1 ){


        comprobador *= i;


   }

   printf("el factorial es %d", comprobador);
}
