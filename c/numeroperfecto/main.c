#include <stdio.h>
#include <stdlib.h>

/*5)	Comprobar sin un número es perfecto. Un número es perfecto si es igual  a la suma de sus divisores sin incluirlo a el. */

int main()
{
    int perfecto;

    int comprobador = 0;

    printf("Digite el numero que desea comprobar si es perfecto: ");
    scanf("%d", &perfecto);

    for(int i = 1; i < perfecto; i = i + 1 ){

      if(perfecto % i == 0){

        comprobador += i;
      }


   }

   if(comprobador == perfecto){

        printf("El numero insertador es un numero perfecto\n");

   }

   else{

    printf("El numero insertador no es un numero perfecto\n");
   }

}
