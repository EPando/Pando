#include<iostream>
#include<conio.h>
using namespace std;
int i,p,n,nus[20];
float mod;
int main()
{
    
    for(i=1;i<=20;i=i+1)
    {
                   cout<<"Dame el numerin: ";
                   cin>>nus[i];
    }
        for(i=1;i<=20;i=i+1)
    {
        mod=nus[i]%2;
        if(mod==0)
        {
        p=p+1;
        }
        else
        {
            n=n+1;
        }
    }
    cout<<"Los numeros pares en total son: "<<p<<"\n";
    cout<<"\nLos numeros impares en total son: "<<n<<"\n";
     cout<<"\n";
    cout<<"Presiona enter para salir :)\n";
    getch();
}
