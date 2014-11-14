#include<iostream>
#include<conio.h>
using namespace std;
int i;
float num[20],qua[20],qiu[20];
int main()
{

    for(i=1;i<=20;i=i+1)
    {
                   cout<<"Dame el numero\n";
                   cin>>num[i];
                   qua[i]=num[i]*num[i];
                   qiu[i]=qua[i]*num[i];
    }
        for(i=1;i<=20;i=i+1)
    {
           cout<<"El cuadrado es del numero "<<num[i]<<" es "<<qua[i]<<" y el cubo es "<<qiu[i]<<"\n";
    }
    cout<<"\n";
    cout<<"Presiona enter para salir :D";
    getch();
}
