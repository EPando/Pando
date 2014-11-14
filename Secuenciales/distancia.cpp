#include <iostream> 
#include <conio.h> 
using namespace std;
float d, pul, ft;
int main()
{
    cout<<"Hola, necesitas la distancia en pulgadas y pies? \n";
    cout<<"\n";
    cout<<"Bien dame la distancia \n";
    cin>>d;
    cout<<"\n";
    pul= d*39.37;
    ft= d*3.28;
    cout<<"Tu distancia en pulgadas es: \n"<< pul<<" in \n";
    cout<<"\n";
    cout<<"Tu distancia en pies es: \n"<< ft<<" ft \n";
    cout<<"\n";
    cout<<"Vuelve pronto, presiona enter para salir (:";
    getch();
}
