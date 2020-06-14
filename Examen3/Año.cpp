#include <iostream>
using namespace std;
int main(void){

    int year;

    cout<<"Ingrese el year que desee comprobar"<<endl;
    cin >> year;

    if ( year % 100 !=0){


    if (year % 4 == 0) 
    cout<<"bisiesto"<<endl;

    else
    {
        cout <<"No es Bisiesto"<<endl;
    }
   
    }

    else if (year % 400 == 0)
    {
        cout<< "Bisieto";
    } 

    else
    {
        cout<<"No es Bisiesto"<<endl;
    }
    
}