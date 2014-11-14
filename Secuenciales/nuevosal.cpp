#include <iostream> 
#include <conio.h> 
using namespace std;
float sal, nsal;
int main()
{
    cout<<"Hola, hubo un incremento de sueldos en la empresa \n";
    cout<<"\n";
    cout<<"Quieres saber tu incremento? \n";
    cout<<"\n";
    cout<<"Cual era tu salario anterior? \n";
    cin>> sal;
    nsal= sal+(sal*.25);
    cout<<"\n";
    cout<<"Incrementaron al 25% tu salario y resulto que tienes: "<<"$"<<nsal<<"\n";
    cout<<"\n";
    cout<<"Por buen trabajador, vuelve pronto, presiona enter para salir :D";
    getch();
}
    
