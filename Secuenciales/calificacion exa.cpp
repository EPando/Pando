#include <iostream> 
#include <conio.h> 
using namespace std;
float clf, cal1, cal2, cal3;
int main ()
{
    cout<<"Calificacion en la materia de algoritmos \n";
    cout<<"\n";
    cout<<"Dame tu primer calificacion \n";
    cin>>cal1;
    cout<<"Dame tu segunda calificaion \n";
    cin>>cal2;
    cout<<"Dame tu tercer Calificacion \n";
    cin>>cal3;
    clf= (cal1+cal2+cal3)/3;
    cout<<"Tu calificacion en la materia de Algoritmos es: \n"<<clf<<"\n";
    getch();
}
