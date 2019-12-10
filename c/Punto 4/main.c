#include <stdio.h>
#include <stdlib.h>


/*4)	Escribir un programa, en lenguaje C, que:

1�) Pida por teclado el radio (dato real) de una esfera.
2�) En el caso de que el radio sea menor o igual que 0, muestre por pantalla el mensaje:

"ERROR: El radio debe ser mayor que cero.".

3�) Repita los pasos 1� y 2�, mientras que, el radio introducido sea incorrecto.
4�) Muestre por pantalla:

"El �rea de una esfera de radio <radio> es: <�rea>".

Nota 1: �rea de una esfera = 4 * pi * radio2

Nota 2: Utilice un bucle mientras (while).
*/

int main()
{
    int radio;
    float area;
    float pi = 3.1416;

    do {

        printf("\n Por favor digite el radio de la esfera: ");

        scanf("%d",&radio);

        if(radio <= 0){

            printf("ERROR: El radio debe ser mayor que cero\n");
        }


    } while( radio <= 0);

    area = 4* pi * (radio * radio);



    printf("El area de esta esfera es: %f\n", area);

}
