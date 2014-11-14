#include<iostream>
#include<conio.h>
using namespace std;
int n, o;
int ne, t, c;
string res;
int main()
{
    menu:
    system("cls");
    cout<<"\n 1.- Tabla de Multiplicar. "; 
    cout<<"\n 2.- Nones y pares.";
    cout<<"\n 3.- Salir.";
    cout<<"\n\n      ";
    cin>>o;
    switch (o)
    {
    case 1:
    system("cls");
    cout<<"\n\n      Dame un numero y desplegare su tabla de multiplicar: ";
    cin>>ne;
    cout<<" \n";
    cout<<" \n";
    cout<<" \n";
    for (c=1;c<11; c++)
    {
        t=ne*c;
        cout<<"    "<<c<<".- "<<t;
        cout<<" \n";
    }
    cout<<" \n\n";
    system ("Pause");
         goto menu;
    
    case 2:
         system("cls");
    cout<<"\n         Dame un numero: ";
    cin>>n;
    cout<<"\n";
    if(n%2==0)
    {
              cout<<"   El numero que me diste es Par...\n\n";
              }
              else
              {
                  cout<<"   Tu numero es Impar...\n\n";
                  }
    cout<<" \n\n";
    system("Pause");
    goto menu;
    
    default:
            break;
    }
}
