#include <iostream>
using namespace std;
int main(void){
float HorasEx;
float Horast;
float SueldoT;
float SueldoR;
float DescuentoM;
float DescuentoMen;
int i = 0, n = 0;
string Nombre;

cout<<"Ingrese la cantidad de empleados"<<endl;
cin>>n;

for( i = 0; i < n; i++){
    cout<<"Ingrese el nombre del Empleado"<<endl;
    cin>>Nombre;
    
    cout<<"Ingrese sus Horas trabajadas"<<endl;
    cin>>Horast;
    cout<<"Ingrese las Horas Extras"<<endl;
    cin>>HorasEx;

    SueldoT = (Horast*1.75) + (HorasEx*2.50);
    
    if(SueldoT > 500)
    {
        DescuentoM = SueldoT*(0.04+0.0625+0.1);
        SueldoR = (SueldoT - DescuentoM);
    }

    else if(SueldoT<500);
    {
        float DescuentoMen = SueldoT*(0.04+0.0625);
        SueldoR = SueldoT - DescuentoMen;
    }

    cout<<"los datos del empleado son"<<endl;
        cout<<Nombre<<endl;
        cout<<"El Salario total es: "<< SueldoT <<endl;
        cout<<"El salario Real es: "<< SueldoR <<endl;


}

}