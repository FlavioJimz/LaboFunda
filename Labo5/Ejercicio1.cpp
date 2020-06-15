#include "iostream"

using namespace std;
int calculadoramcd(int NumeroMayor, int NumeroMenor, int Residuo)


{
    do
    {
        Residuo = NumeroMayor%NumeroMenor;
        if (Residuo !=0)
        {
            NumeroMayor = NumeroMenor;
            NumeroMenor = Residuo;

        }
    }
while (Residuo !=0);
cout << "El mcd de la cifra que desea es: "<< NumeroMenor << endl;


}

int main(){

    int NumerosMayor;
    int NumerosMenor;
    int Residuos;

    cout<<"Ingrese el numero mayor: " <<endl;
    cin>>NumerosMayor;
    cout<<"Ingrese el numero menor: " <<endl;
    cin>>NumerosMenor;

    calculadoramcd(NumerosMayor, NumerosMenor, Residuos);
}