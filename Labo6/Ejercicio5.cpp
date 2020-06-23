#include <iostream> 
using namespace std;




int main()
{

    int ImparesN[200];

    cout << "\nLos siguientes son los primeros 100 numeros: ";
    for (int i = 200; i >= 0; i--) {


        if (i % 2 != 0)
        {
            ImparesN[i] = i;

            cout << "\n" << ImparesN[i] << endl;
        }
    }





    return 0;
}