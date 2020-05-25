#include <iostream>
#include <cstring>
using namespace std;


int main(){
  int logintud;
    int Caracteres;
    char palabra[100];
    int residuo;

    cout <<endl;
    cout << "Verifique si hay mas de 10 caracteres o no y si su longitud es par o impar" << endl << endl;
    cout << "ingrese una palabra" <<endl;
    cin >> palabra;

    Caracteres = strlen(palabra);

    if (Caracteres>10)
    {
      cout<<"La palabra tiene mas de 10 caracteres, esta tiene: " <<Caracteres<<endl;
      residuo= Caracteres%2;

      if (residuo == 0)
      {
          cout<<"El numero me letras es par";
      }
      else
      {
          {
            cout<<"EL numero de letras es impar";
          }
      }



      if(Caracteres<10)
      {
          cout<<"La palabra tiene menos de 10 caracteres, eta tiene: " <<Caracteres<<endl;
          residuo= Caracteres%2;

          if (residuo== 0)
        {
            cout<< "El numero es par";
        }
        else
        {
            cout<<"El numero es impar";
        
        }
}
}
}
   
  
   
         


