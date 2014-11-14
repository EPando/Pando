#include <iostream> 
#include <conio.h> 
using namespace std;
float prch, prcm, h, m, al;
int main()
{
    cout<<"Necesitas el porcentaje de alumnos y alumnas que tienes? \n";
    cout<<"\n";
    cout<<"Tus alumnos en total son: ";
    cin>>al;
    cout<<"\n";
    cout<<"Cuantos Caballeros tienes? ";
    cin>>h;
    cout<<"\n";
    cout<<"Cuantas Damas tienes? ";
    cin>>m;
    cout<<"\n";
    prch= (h/al)*100;
    prcm= (m/al)*100;
    cout<<"Tu porcentaje de damitas es \n"<<prcm<<"% \n";
    cout<<"\n";
    cout<<"Tu porcentaje de Caballeros es \n"<<prch<<"% \n";
    cout<<"\n";
    cout<<"Vuelve pronto (: ";
    getch();
}
