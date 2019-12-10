#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero =0;

    char letra;




     do {

        printf("\nDigite un numero entero: ");

        scanf("%d",&numero);


        printf("\n Desea digitar otro numero entero: ");

        letra = getchar();


    } while(letra != 'n');


}
