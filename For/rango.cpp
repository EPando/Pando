#include <iostream> 
#include <conio.h> 
using namespace std;
int nru,nrd,r, nr;
int main()
{
    cout<<"Rango de numeros \n";
cout<<"Hola dame un numero: ";
cout<<"\n";
cin>>nru;
cout<<"Dame un numero mayor al anterior: ";
cin>>nrd;
cout<<"\n";
for (r=nru;r<=nrd; r++)
{
       nr=(nru++)+ nr; 
}
     cout<<"La suma dentro del rango de datos de tus numeros es"<<nr;
     cout<<"\n";
     cout<<"\n";
     getch();
     }
      
