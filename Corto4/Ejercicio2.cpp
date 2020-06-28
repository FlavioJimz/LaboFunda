#include <iostream>
#include <conio.h>
using namespace std;

int Menor (float Alturas[], int Arreglo);
float Media (float Alturas[],int Arreglo);
int Mayor (float Alturas1[], int Arreglo); 
int mayor;
const int Arreglo = 25;
float Alturas [Arreglo];
float Suma;
int i;

int main (){

  cout<<"Ingrese las estaturas: ";
    cout<<endl;
    for ( i = 0; i < Arreglo; i++)
    {
        cout<<"Estudiantes "<<i<<": ";
        cin>>Alturas[i];
    }

cout<<"El promedio de la suma de todas las alturas: "<<Media(Alturas,Arreglo)<<endl;
cout<<"Dato Mayor del promedio: "<<Mayor(Alturas,Arreglo)<<endl;
cout<<"Dato Menor del promedio: "<<Menor(Alturas,Arreglo)<<endl;

getch();
return 0;

}

float Media (float Alturas[],int Arreglo){

for (int i=0;i<Arreglo;i++){

   Suma += Alturas[i]/Arreglo;
}

return Suma;

}

int Menor (float Alturas[], int Arreglo){

int menor = 0;

for (int i = 0; i < Arreglo; i++)

{

    if (Alturas[i] < Suma)
    {
        menor++;
    }

}
    return menor;
}

int Mayor (float Alturas[], int Arreglo)
{
int mayor=0;


    for (int i = 0; i < Arreglo; i++)

    {

        if (Alturas[i] > Suma)
        {
            mayor++;;
        }

    }
    return mayor;
}
