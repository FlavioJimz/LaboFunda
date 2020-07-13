#include <iostream>
using namespace std;
int main(void){
    int Colores;
    
    
    cout<< "Insertar el color que prefiera"<<endl;
    cout<< "1-Azul" << endl << "2-Rojo" << endl << "3-Verde" << endl << "4-Anaranjado" << endl << "5-Negro" << endl;
    cin>>Colores;

    if(Colores == 1){
        cout << "Usted escogio Azul gano $10" << endl;
    }

    else if (Colores == 2){
        cout << "Usted escogio el Rojo gano $20" <<endl;
    }

    else if (Colores == 3){
        cout << "Usted escogio el Verde gano $40" <<endl;
    }

    else if (Colores == 4){
        cout << "Usted escogio el Anaranjado gano $70" <<endl;
    }

    else if (Colores == 5){
        cout << "Usted escogio el Negro gano $100" << endl;
    
    }
    else{
        cout << "Ingrese un valor valido" <<endl;
    }


    





}