#include <iostream>

using namespace std;

int main()
{
    int n, num,resto,numInv=0, palindromo, comprobacion, auxiliar;
    cout << "introduzca el numero: ";
    cin >> n;
  
    for (int j=n; j<=1000000; j++)
    {

        int a=0;
        for(int i=1; i<=1000000; i++)
        {
            if(j%i==0)
           {
               a++; 
           }
        }
 
        if (a==2)
        { 
             num = j;
             comprobacion = j;
             while(num>0)
            {
                resto=num%10;
                num=num/10;
                numInv=numInv*10+resto;
            }

            auxiliar = numInv;
            numInv=0;
 
            if(auxiliar == comprobacion)
            {
                 cout << endl << "el numero que es primo y palindromo es: " << comprobacion << endl;
                return 0;
   
            } 
 

        }
 
      }
 
}
