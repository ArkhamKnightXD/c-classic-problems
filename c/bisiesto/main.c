#include <stdio.h>
#include <stdlib.h>

/*1)	Haga un programa en C para determinar cuándo un año es bisiesto*/

int main()
{

    int num1;

printf("Introduzca la fecha para determinar si es bisiesto o no: ");
scanf("%d",&num1);

//Las dos primeras condiciones: Si num1 es múltiplo de 4 y NO es múltiplo de 100

if((num1%4==0) && !(num1%100==0))
{
    printf("La fecha es bisiesto");
}


//La tercera condicion: Si num1 es múltiplo de 4

else if (num1%400==0)
{
    printf("La fecha es bisiesta");
}


else
{
    printf("La fecha NO es bisiesta");
}


}

