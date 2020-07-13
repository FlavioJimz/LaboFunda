#include <iostream>
using namespace std;
int main(){
    int Pais; 
    float Iva, Dinero;

    cout <<"ingrese la cantidad de dinero" <<endl;
    cout <<"En que pais se encuentra: " <<endl;
    cout << "1-El Salvador" << endl << "2-Guatemala" << endl << "3-Honduras" << endl << "4-España" << endl;
    cin >>Pais;
    cout <<"ingrese la cantidad de dinero" <<endl;
    cin >>Dinero;
    

    if(Pais == 1){
        (Iva = (Dinero*1.13));
        cout <<"El monto a pagar es: "<<Iva<<endl;
    }
    else if(Pais == 2){
        (Iva = (Dinero*1.09));
        cout <<"El monto a pagar es: "<<Iva<<endl;
    }
    else if(Pais == 3){
        (Iva = (Dinero*1.15));
        cout <<"El monto a pagar es: "<<Iva<<endl;
    }
    else if(Pais == 4){
        (Iva = (Dinero*1.20));
        cout <<"El monto a pagar es: "<<Iva<<endl;
    }
    else{
        cout<<"El numero no es valido";
    }
    


}