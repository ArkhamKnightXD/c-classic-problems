#include<stdio.h>
#include <time.h>


int main()

{

	const char cPiedra[]="El CPU ha elegido PIEDRA\n";

	const char cTijeras[]="El CPU ha elegido TIJERAS\n";

	const char cPapel[]="El CPU ha elegido PAPEL\n";

	const char empate[]="El resultado es un empate\n";

    int a, puntosCpu=0, puntosJugador=0, opcionDelJugador;

    rand(time(0));

    clock_t t;

    int contador =0;

        inicio:

    while(puntosCpu<3 && puntosJugador <3)

    {


          t = clock();


          printf("\n Para jugar ingrese uno de las 3 opciones (Piedra=0 Tijeras=1 Papel=2) tiene 5 segundos para elegir, sino sera punto automatico para el cpu \n");


          scanf("%i",&opcionDelJugador);

          t = clock() - t;

          double tiempoLimite = ((double)t)/CLOCKS_PER_SEC;

          printf("\n");


          if(tiempoLimite >= 5 ){

             printf("\n Se ha excedido el tiempo limite por %f segundo, esto le dara 1 punto al cpu \n", tiempoLimite-5);

             puntosCpu++;

             tiempoLimite =0;

             t = clock() - t;

             goto inicio;

          }


          a=rand()%3;


          switch(opcionDelJugador)

          {

               case 0:

               printf ("\n Has elegido Piedra\n");

               switch(a)

               {

                    case 0:

                    printf(cPiedra);

                    printf(empate);

                    break;


                    case 1:

                    printf(cTijeras);

                    printf("HAS GANADO\n");

                    puntosJugador++;

                    break;


                    case 2:

                    printf(cPapel);

                    printf("HAS SIDO DERROTADO \n");

                    puntosCpu++;

                    break;

                }

                break;


                case 1:

                printf ("\n Has elegido Tijeras\n");

                switch(a)

                {

                     case 0:

                     printf(cPiedra);

                     printf("HAS SIDO DERROTADO \n");

                     puntosCpu++;

                     break;


                     case 1:

                     printf(cTijeras);

                     printf(empate);

                     break;


                     case 2:

                     printf(cPapel);

                     printf("HAS GANADO\n");

                     puntosJugador++;

                     break;

                }

                break;


                case 2:

                printf ("\n Has elegido Papel\n");

                switch(a)

                {

                     case 0:

                     printf(cPiedra);

                     printf("HAS GANADO\n");

                     puntosJugador++;

                     break;


                     case 1:

                     printf(cTijeras);

                     printf("HAS SIDO DERROTADO\n");

                     puntosCpu++;

                     break;


                     case 2:

                     printf(cPapel);

                     printf(empate);

                     break;

                }

                break;

           }

    }

    if (puntosCpu > puntosJugador){

        printf ("\n");
        printf ("has perdido la partida\n");
    }

    else
        printf ("has ganado la partida\n");


    printf ("\n");
    printf("Gracias por participar \n");

}
