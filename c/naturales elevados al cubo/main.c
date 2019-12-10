#include <stdio.h>
#include <stdlib.h>
#include <math.h> // inclui math.h para elevar numeros al cubo

/*Escribir un programa, en lenguaje C, que muestre por pantalla los cinco primeros números naturales pares elevados al cubo.*/

int main()
{
    int elevado;

    printf("Los 5 primeros numeros naturales elevador al cubo\n");

    for(int i = 1; i <= 5; i = i + 1 ){


        elevado = pow(i,3); // funcion para elevar al cubo

        printf("Los numeros elevados al cubo son: %d \n",elevado);

      }


   }

