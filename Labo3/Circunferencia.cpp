#include <iostream>
using namespace std;

int main(){

    float Radio;
    float Area;
    float Perimetro;
    float Diametro;
    float pi= 3.1416;

     cout <<"introducir el radio de la circunferencia"<<endl;
     cin>>Radio;

     Perimetro=2*pi*Radio;
     cout<<"el perimetro de la circunferencia es:"<<endl<<Perimetro<<endl;
     
     cout<<"introdue el diametro de la circunferencia"<<endl;
     cin>>Diametro;
     Area=(pi*Diametro*Diametro)/4;
     cout<<"El area de la circunferencia es:"<<endl<<Area<<endl;




}