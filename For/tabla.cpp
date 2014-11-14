#include<iostream>
#include<conio.h>
using namespace std;
int ne, t, c;
int main()
{
    cout<<"\n\n       Hola dame un numero y desplegare su tabla de multiplicar: ";
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
        cout<<"       Gracias vuelva pronto! ";
        getch();
}
