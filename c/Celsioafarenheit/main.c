#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 2)	Programa C para convertir la temperatura de Fahrenheit a Celsius y Celsius a Fahrenheit:
*/

    int decision;
    int farenheit;
    int celsio;
    float calculoafarenheit = 0;
    float calculoacelsios = 0;

    printf("Si desea convertir de celsio a farenheit digite 1\n");
    printf("Si desea convertir de farenheit a celsio digite 2\n");

    scanf("%d",&decision);


    if(decision == 1){

    printf("Digite la temperatura en celsio para convertir a farenheit\n");

    scanf("%d",&celsio);

    calculoafarenheit = ((celsio*9/5) +32);

    printf("La temperatura en farenheit es: %f\n", calculoafarenheit);

    }


    if(decision == 2){

    printf("Digite la temperatura en farenheit para convertir a celsio\n");

    scanf("%d",&farenheit);

    calculoacelsios = ((farenheit - 32) *5/9);

    printf("La temperatura en celsio es: %f\n", calculoacelsios);

    }


}
