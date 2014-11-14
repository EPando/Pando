#include <iostream> 
#include <conio.h> 
using namespace std;
float dol, pes, val;
int main()
{
    cout<<"Te ayudare a calcular tus pesos en dolares \n";
    cout<<"\n";
    cout<<"Podrias darme el valor del dolar? \n";
    cin>>dol;
    cout<<"\n";
    cout<<"Ahora dame los pesos que tienes: \n";
    cin>>pes;
    val= pes/dol;
    cout<<"\n";
    cout<<"El valor de tus pesos en Dolares es: "<<"$"<<val<<"\n";
    cout<<"\n";
    cout<<"Un gusto ayudarte, vuelve pronto (: \n";
    getch();
}
