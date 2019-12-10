#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa, en lenguaje C, que muestre por pantalla todos los números múltiplos de 3 que hay entre el -15 y el -3, ambos inclusive.*/

int main()
{

    printf("Los numeros multiplos de 3 entre -15 y -3\n");

    for(int i = -15; i <= -3; i = i + 1 ){

      if(i % 3 == 0){

        printf("Los numeros multiplos de 3 son : %d\n", i);
      }



}
}
