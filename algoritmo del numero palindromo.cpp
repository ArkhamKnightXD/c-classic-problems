#include <iostream>

using namespace std;

int main()
{
  
  int num, resto, numInv, comprobacion;
 
 cout<<"Ingrese numero"<<endl;
 cin>>num;
 comprobacion = num;
 while(num>0)
{
         resto=num%10;
      num=num/10;
      numInv=numInv*10+resto;
 }
 cout<<"El numero invertido es :"<<numInv << endl;
 
 if(numInv == comprobacion)
{
   cout << "el numero es palindromo: " << comprobacion << endl;
 } 

    
}
