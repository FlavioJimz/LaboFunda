#include <iostream>
using namespace std;
int main(void){

    int numero1, numero2;
    cout << "ingrese el primero numero" << endl;
    cin >> numero1;
    cout << "ingrese el segundo numero" << endl;
    cin >> numero2;

    if (numero1 % numero2 == 0){
        cout << numero2 << " Es divisor de " << numero1 << endl;
    }

    else{
        cout << numero2 << "No es divisor de " << numero1 << endl;

    }

}