#include <stdio.h>
#include <stdlib.h>

/*8-) Genere un programa en c para la tabla de multiplicar hasta el 12*/

int main()
{
    int resultado;

    printf("Tabla de multiplicar hasta el 12\n");

    for(int i = 1; i <= 12; i = i + 1 ){


        for(int j = 1; j <= 12; j = j + 1 ){

                resultado = i*j;

                    printf("La multiplicacion de %d * %d es igual a %d \n", i, j, resultado);
        }

   }

}
