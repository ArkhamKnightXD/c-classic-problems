#include <iostream>

using namespace std;

int main()
{ 
    int pesoCamion, cantidadMaximaLeche, cantidadVacas, llenandoCamion; 
    float pesoVacas[20];
    int produccionLecheXvaca[20];
  
    cout<<"Ingrese el peso maximo que el camion puede llevar = ";
    cin>> pesoCamion;
    
    cout << endl <<"Ingrese la cantidad de vacas a la venta = ";
    cin>> cantidadVacas;
   
   for(int i = 0; i < cantidadVacas ; i++)
   {
    cout << endl << "Ingrese el peso de la vaca: " ;
    cin >> pesoVacas[i];
    
    cout << endl << "Ingrese la produccion de leche de la vaca por dia " ;
    cin >> produccionLecheXvaca[i];
     
   } 
  
   
   for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (produccionLecheXvaca[f] > produccionLecheXvaca[f + 1])
            {
                int aux =0;
                aux = produccionLecheXvaca[f];
                produccionLecheXvaca[f] = produccionLecheXvaca[f + 1];
                produccionLecheXvaca[f + 1] = aux;
                
                
                int aux1 =0;
                aux1 = pesoVacas[f];
                pesoVacas[f] = pesoVacas[f + 1];
                pesoVacas[f + 1] = aux1;
                
            }      
            
        }
    }
   
    
  /* for(int i = 0 ; i < cantidadVacas ; i++)
   {
       
       if(llenandoCamion < pesoCamion)
       {
          llenandoCamion += pesoVacas[i];
          cantidadMaximaLeche += produccionLecheXvaca[i];
       }
       
   }*/
   
   for(int j = 0; j < cantidadVacas ; j++)
   {
     
    cout << endl << pesoVacas[j] ;
    cout<< endl  << produccionLecheXvaca[j] ;
    
     
   } 
   
   cout << endl << llenandoCamion;
   cout << endl << cantidadMaximaLeche;
   // ojo resolver la parte en comentario
}
