#include <iostream>
using namespace std;
int main(){


char Palabras[80];

int i=0;

std::cout<<"Ingrese la palabra que desee: "<<endl;
std::cin.getline (Palabras, 100);

while(Palabras[i]!='\0')

{

if (Palabras[i]=='M'||Palabras[i]=='m')

Palabras[i]='0';

if (Palabras[i]=='U'||Palabras[i]=='u')

Palabras[i]='1';

if (Palabras[i]=='R'||Palabras[i]=='r')

Palabras[i]='2';

if (Palabras[i]=='C'||Palabras[i]=='c')

Palabras[i]='3';

if (Palabras[i]=='I'||Palabras[i]=='i')

Palabras[i]='4';

if (Palabras[i]=='E'||Palabras[i]=='e')

Palabras[i]='5';

if (Palabras[i]=='L'||Palabras[i]=='l')

Palabras[i]='6';

if (Palabras[i]=='A'||Palabras[i]=='a')

Palabras[i]='7';

if (Palabras[i]=='G'||Palabras[i]=='g')

Palabras[i]='8';

if (Palabras[i]=='O'||Palabras[i]=='o')

Palabras[i]='9';

i++;

}

std::cout << Palabras;

}
