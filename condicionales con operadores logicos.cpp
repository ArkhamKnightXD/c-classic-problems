#include <iostream>

using namespace std;

int main()
{
  int sueldo, tiempo, aumento;
  
  cout << "Ingrese su sueldo" << endl;
  cin >> sueldo;
  cout << "Ingrese su tiempo en la empresa" << endl;
  cin >> tiempo;
  
  if(sueldo < 500 && tiempo >= 10)
  {
    aumento = sueldo*0.2 + sueldo;
    sueldo = aumento;
    cout << "El sueldo que se le pagara esta con un aumento del 20: " << sueldo << endl;
    
  }
  
  if(sueldo < 500 && tiempo < 10)
  {
    aumento = sueldo*0.05 + sueldo;
    sueldo = aumento;
    cout << "El sueldo que se le pagara esta con un aumento del 5:  " << sueldo << endl;
    
  }
  
  if(sueldo >= 500)
  {
    cout << "sueldo sin cambios: " << sueldo;
    
  }
  
    
    
}
