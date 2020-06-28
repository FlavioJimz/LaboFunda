#include <iostream>

using namespace std;

float Mtrz [100][100];
float MPromedio [100];
double Estudiantes;
double Notas = 5;
float Suma;
float Promedio;
int contador=0;
int i;
int X;

int main (){

cout<<endl;
cout<<"-------BIENVENIDO A LA CALCULADORA DE ALUMNOS-------"<<endl;
cout<<"\nIngrese el numero de alumnos: ";
cin>>Estudiantes;


for (int i=0; i<Estudiantes;i++){
    cout<<"\nDigite las calificacion del alumno "<<i+1 << " en |base 10|"<<endl;
    for (int X=0; X<Notas;X++){
        cout<<" Nota " << X+1<<": ";
        cin>>Mtrz [i][X];

    }
}
for (int i=0; i<Estudiantes;i++){

    for (int X=0; X<Notas;X++){

        Suma = Suma + Mtrz[i][X];
    }

    Suma = Suma * 2;
    cout<<"\nLa nota Final del estudiante "<<i+1<<" es" << ": "<<Suma<<endl;

    if (Suma >= 60 ){
        cout<<"Aprobado"<<endl;
    }

    else if (Suma < 60)
    {
        cout<<"reprobado"<<endl;
    }

    else if (Suma > 100)
    {
        cout<<"Ingrese notas validas"<<endl;
    }
    
    Suma = 0;
}
}