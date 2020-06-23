#include "iostream"
using namespace std;



int D(int A1[],int No, int A2[])
{
    
    cout<<"Escribe "<<No<<" Digitos del primer arreglo: ";

    for ( int i = 0; i < No; i++)
    {
        cin>>A1[i];
    }
    cout<<"Escribe "<<No<<" Digitos del segundo arreglo: ";

    for (int i = 0; i < No; i++)
    {
        cin>>A2[i];
    } 
}




int X(int A1[],int A2[],int No,int R[])
{
      int i;
  
    for ( i = 0; i < No; i++)
    {
        R[i]= A1[i] + A2[i];
    }
}


void Re(int R[], int A)
{ 
    cout<<"La suma de ambos arreglos es:";
    for (int i = 0; i < A; i++)
    {
    
        cout<<R[i]<<" ";
    }

}



int main()
{
  int No;
    cout<<"La Suma de todos los arreglos"<<endl;
    cout<<"¿Cuantos arreglos desea?: ";
    cin>>No;
    int A1[No];
    int A2[No];
    int R[No];

    D(A1 ,No,A2);
    X(A1,A2,No,R);
    Re(R,No);
 
}