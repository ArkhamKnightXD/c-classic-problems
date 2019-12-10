#include <stdio.h>
#include <stdlib.h>

/*6)	Encuentra la suma de todos los números primos por debajo de 100.000. */

int main()
{
    int sumador;

    printf("La suma de todos los numeros primos por debajo de 100k\n");

    for (int j=0; j<=100000; j++)
{

 int a=0;
 for(int i=1; i<=100000; i++)//divide a j entre los números del 1 al 100
 {
     if(j%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
     a++;
 }

 if (a==2)
 { //si solo tiene dos números divisores entonces es primo y se imprime
     sumador +=j;

 //printf("%d\n", j);

 }

 }

 printf("La suma de los numeros primos es: %d", sumador);

   }

