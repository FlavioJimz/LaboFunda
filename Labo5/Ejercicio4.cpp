#include <iostream>
using namespace std;

int main() {

    int Dia;
    int Mes;
    int Year;

    char Separado;

    cout << "Introducir la fecha deseada en este orden Dia,Mes,Year" << endl;
    cin >> Dia >> Separado >> Mes >> Separado >> Year;


    // Años no validos.31/12/2001
    
    if (Dia <= 0 || Mes > 12 || Year < 0||Dia>31)
    {
        cout << "Introducir una fecha factible" << endl;
        cout << "Introducir la fecha deseada en este orden Dia,Mes,Year" << endl;
        cin >> Dia >> Separado >> Mes >> Separado >> Year;

    }


     if (Dia > 29 && Year % 4 == 0 && Mes == 2)
    {
        cout << "Introducir una fecha factible" << endl;
        cout << "Introducir la fecha deseada en este orden Dia,Mes,Year" << endl;
        cin >> Dia >> Separado >> Mes >> Separado >> Year;
    }


     if (Dia > 28 && Year % 4 != 0 && Mes == 2)
     {
         cout << "Introducir una fecha factible" << endl;
         cout << "Introducir la fecha deseada en este orden Dia/Mes/Year" << endl;
         cin >> Dia >> Separado >> Mes >> Separado >> Year;
     }



     if (Dia > 30 && Mes == 4 || Dia > 30 && Mes == 6 || Dia > 30 && Mes == 9 || Dia > 30 && Mes == 11)
     {
         cout << "Introducir una fecha factible" << endl;
         cout << "Introducir la fecha deseada en este orden Dia/Mes/Year" << endl;
         cin >> Dia >> Separado >> Mes >> Separado >> Year;
     }




     // Meses que poseen 30 dias.


    if (Dia == 30 && Mes == 4 || Dia == 30 && Mes == 6 || Dia == 30 && Mes == 9 || Dia == 30 && Mes == 11)
    {
        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << Mes + 1 << '/' << Year << endl;
    }


    else if ((Mes == 4) || (Mes == 6) || (Mes == 9) || (Mes == 11) && Dia < 30 )
    {
        cout << "\n\tLa fecha al siguiente dia sera: " << Dia + 1 << '/' << Mes << '/' << Year << endl;
    }
    


    // Meses que possen 31 dias.


    else if ((Mes == 1) || (Mes == 3) || (Mes == 5) || (Mes == 7) || (Mes == 10)|| (Mes == 8) && Dia < 31)

    {
        cout << "\n\tLa fecha al siguiente dia sera: " << Dia + 1 << '/' << Mes << '/' << Year << endl;
    }



    else if (Dia == 31 && Mes == 12)
    {

        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << 1 << '/' << Year + 1 << endl;
    }



    else if ((Mes == 1) || (Mes == 3) || (Mes == 5) || (Mes == 7) || (Mes == 10) || (Mes==8) && Dia == 31)
    {

        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << Mes + 1 << '/' << Year << endl;
    }

    




    // Año Bisiesto Febrero 


    else if (Dia < 29 && Mes == 2 && Year % 4 == 0)

    {
        cout << "\n\tLa fecha al siguiente dia sera: " << Dia + 1 << '/' << Mes << '/' << Year << endl;
    }

    else if (Dia == 29 && Mes == 2 && Year % 4 == 0)

    {

        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << Mes + 1 << '/' << Year << endl;
    }
   



    // Febrero

    else if (Dia == 28 && Mes == 2 && Year % 4 != 0)
    {

        cout << "\n\tLa fecha al siguiente dia sera: " << 1 << '/' << Mes + 1 << '/' << Year << endl;
    }

    

    else if (Dia == 28 && Mes == 2 && Year % 4 == 0)
    {
        cout << "\n\tLa fecha al siguiente dia sera: " << Dia + 1 << '/' << Mes << '/' << Year << endl;
    }


    else if (Dia < 28 && Mes == 2 && Year % 4 == 0 || Year % 4 != 0)
    {
        
        cout << "\n\tLa fecha al siguiente dia sera: " << Dia + 1 << '/' << Mes << '/' << Year << endl;
    }

    // Programa Finaliza
    return 0;

}
