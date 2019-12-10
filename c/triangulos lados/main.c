#include <stdio.h>
#include <stdlib.h>

/*3)	Programa C para verificar si el triángulo es equilátero, escaleno o isósceles:*/

int main()
{

int a, b, c;

printf("\n Ingrese primer lado: ");
scanf("%d",&a);

printf("\n Ingrese segundo lado: ");
scanf("%d",&b);

printf("\n Ingrese tercer lado: ");
scanf("%d",&c);


if(a==b && a==c)
{
printf("\n El triangulo es equilatero.");
}

else if(a==b || a==c || b==c)
{
printf("\n El triangulo es isosceles.");
}

else if(a!=b && a!=b && b!=c)
{
printf("\n El triangulo es escaleno.");
}

}
