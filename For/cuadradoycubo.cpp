#include<iostream>
#include<conio.h>
using namespace std;
float nu,cua,cu,n;
int main()
{
    for(n=1;n<=10;n++)
    {
    cout<<"\nDame el numero: \n";
    cin>>nu;
    cua=nu*nu;
    cu=nu*nu*nu;
    cout<<"El cuadrado del numero es: "<<cua<<"\n";
    cout<<"El cubo del numero es: "<<cu<<"\n";
    }
    cout<<"Da clic en enter para cerrar";
    getch();
}
