#include "iostream"

using namespace std;

int YearBisiesto (int Tiempo)
{
    if (Tiempo%4 ==0)
    {
        return true;
    }
    else if (Tiempo %4 && Tiempo%100 !=0)
    {
        return false;
    }
}
int main()
{
    int Tiempo;
    cout << "Ingrese el year del que desee informacion" << endl;
    cin >> Tiempo;
    cout << "El year es: " << YearBisiesto(Tiempo);
}