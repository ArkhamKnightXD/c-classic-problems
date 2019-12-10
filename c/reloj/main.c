#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>


void reloj(int h,int m,int s, int bateria)
{

int i,a;



for (; ;)
{
for (a=0; a<=61; a++){

Sleep(1000);
s++;


if (s==60)
{

    bateria--;

m++;
s = 0;

}


if (m==60)
{

m = 0;
h++;



}

if (h==13){

h = 1;

}
printf("\n");
printf(" Horas ");
printf("Minutos ");
printf("Segundos ");
printf("        Porcentaje de la bateria\n\n ");
printf("%i : %i : %i                      %i\n",h,m,s,bateria);


}


}
}



 main()
{

   int horas, minutos, segundos, bateria=100;

   do {

   printf("Inserte las horas: ");

   scanf("%d",&horas);

   printf("Inserte los minutos: ");

   scanf("%d",&minutos);

   printf("Inserte los segundos: ");

   scanf("%d",&segundos);

   reloj(horas,minutos,segundos,bateria);


} while( bateria != 0);



}

