#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string palabra, letraI, LetraF;
    int ultima, longitud;
    cout << "Ingrese Palabra"<<endl;
    cin >> palabra;
    longitud= palabra.length();
    letraI=palabra[0];
    ultima=longitud - 1;
    LetraF=palabra[ultima];

    if(letraI == LetraF){

        cout<< "Inicia y Finaliza con la misma letra"<<endl;

    }

    else{

        cout<< "No inicia ni finaliza con la misma letra" <<endl;
    }

    
    

    
}