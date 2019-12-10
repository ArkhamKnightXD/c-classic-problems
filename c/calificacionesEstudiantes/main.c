#include <stdio.h>
#include <stdlib.h>

/*4)	Programa C para ingresar calificaciones de estudiantes y encontrar porcentaje y calificación: */

int main()
{
    int calificacion;

    printf("Ingrese la calificacion del estudiante: ");
    scanf("%d",&calificacion);

    if(calificacion < 25){

        printf("La calificacion del estudiante es: F \n");

    }

    if(calificacion > 25 && calificacion <= 45){

        printf("La calificacion del estudiante es: E \n");

    }

    if(calificacion > 45 && calificacion <=50){

        printf("La calificacion del estudiante es: D \n");

    }

    if(calificacion > 50 && calificacion <=60){

        printf("La calificacion del estudiante es: C \n");

    }

    if(calificacion > 60 && calificacion <=80){

        printf("La calificacion del estudiante es: B \n");

    }

    if(calificacion > 80){

        printf("La calificacion del estudiante es: A \n");

    }
}
