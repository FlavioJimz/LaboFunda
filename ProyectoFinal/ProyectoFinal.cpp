#include "iostream"
#include "string"
using namespace std;
const int longCad = 20; 

//Planteamiento

struct CostePorArticulo{ 
int CantidadDeArt; 
float PrecioArt;
char Articulo[longCad + 1]; 
float CostoUnidDeArticulo; 
}; 


//Funciones 1

void Datos(int CantidadDelArt,CostePorArticulo Ticket[100]);
void CosteArticulo(int CantidadDelArt,CostePorArticulo Ticket[100]);
void Muestra(int CantidadDelArt,CostePorArticulo Ticket[100]);
float CostoTotal(int CantidadDelArt,CostePorArticulo Ticket[100],float costo);



int main()
{
    
    int CantidadDeArt;
    cout<<endl;
    cout<<"BIENVENIDOS A LA TIENDA DEL TIO FLAVITO "<<endl<<endl;
    cout<<"Buenas, Cuantos articulos desea? ";
    cin>>CantidadDeArt;
    

    CostePorArticulo Ticket[CantidadDeArt];
    Datos(CantidadDeArt, Ticket);
    CosteArticulo(CantidadDeArt,Ticket);
    Muestra(CantidadDeArt,Ticket);
    float Coste;
    cout<<endl<<endl;
    cout<<"El costo total es:  $"<<CostoTotal( CantidadDeArt,Ticket,Coste);
    return 0;
}



//Funciones 2

void CosteArticulo(int CantidadDeArt,CostePorArticulo Ticket[100])
{
    for (size_t i = 0; i < CantidadDeArt; i++)
    {
        Ticket[i].Articulo;
        Ticket[i].CantidadDeArt;
        Ticket[i].PrecioArt;
        if (Ticket[i].CantidadDeArt>=1)
        {
            Ticket[i].CostoUnidDeArticulo= Ticket[i].CantidadDeArt*Ticket[i].PrecioArt;
        }
       
    }
}



//Funcion 3

void Muestra(int CantidadDeArt,CostePorArticulo Ticket[100])
{
    cout<<"FACTURA DE LA TIENDA DEL TIO FLAVITO:";
    for (size_t i = 0; i < CantidadDeArt; i++)
    {
        cout<<endl;
        cout<<Ticket[i].Articulo<<endl;
        cout<<"Cantidad de Articulos: "<<Ticket[i].CantidadDeArt<<endl;
        cout<<"Precio Unitario del Articulo: $"<<Ticket[i].PrecioArt<<endl;
        cout<<"Costo total por articulo: $"<<Ticket[i].CostoUnidDeArticulo;
    }
}



//Funcion 4

void Datos(int CantidadDeArt,CostePorArticulo Ticket[100])
{
    cout<<endl;
    cout<<"Introduzca los datos de cada Art: "<<endl<<endl;
    for (size_t i = 0; i < CantidadDeArt; i++)
    {
        fflush(stdin);
        cout<<"Nombre del Articulo: ";
        cin.getline(Ticket[i].Articulo,20);
        cout<<"Cantidad del Articulo: ";
        cin>>Ticket[i].CantidadDeArt;
        cout<<"Precio Unitario del Articulo: ";
        cin>>Ticket[i].PrecioArt;
        cout<<endl;
    }
}



//Funcion 5 

float CostoTotal(int CantidadDelArt,CostePorArticulo Ticket[100],float Coste)
{
    Coste=0;
    for (size_t i = 0; i < CantidadDelArt; i++)
    {
        Ticket[i].Articulo;
        Ticket[i].CantidadDeArt;
        Ticket[i].PrecioArt;
        Ticket[i].CostoUnidDeArticulo;
        Coste=Coste+Ticket[i].CostoUnidDeArticulo;
                
    }
    return Coste;
    
}