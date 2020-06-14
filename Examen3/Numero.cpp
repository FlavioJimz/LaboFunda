#include <iostream>
using namespace std;
int main(void){
    
    int NumeroMagico = 44;
    int i;
    int Numero;
    char L;

cout<<"Bienvenido de al Numero secreto"<<endl;
    for(i = 0; i < 5; i++)
    {

cout<<"Ingrese su numero del 1 al 100"<<endl;
cin>>Numero;
getchar();

if (Numero < 44){

    cout<<"El numero ingresado es menor al numero secreto" << endl; cout << "Intento: "<< i + 1 <<endl;
    cout<<"Si deseas salir del juego presiona la letra" "(L)"<<endl;
}

else if(Numero > 44){

    cout<<"EL numero ingresado es mayor al numero secreto"<<endl; cout<< "intento:" << i + 1 <<endl;
    cout<<"Si deseas salir del juego presiona la letra" "(L)"<<endl;
}

if (Numero == 44)
{
    cout<<"Felicidades encontro el numero secreto"<<endl;
    break;
}

else if (Numero == 'L')
{
    break;
    cout<< "Has salido del juego"<<endl;
}


}
}