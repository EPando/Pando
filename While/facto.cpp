#include<iostream>
#include<conio.h>
using namespace std;
int f=1, nu,fac=1;
string res;
main()
{
    cout<<"\n\n\n   Hola, dame un numero, calculare su factorial: ";
    cin>>nu;
    while(nu>=f)
    {
          fac=f*fac;
          f= f+1;
    }
          cout<<"\n\n     Su factorial es: "<<fac;
    cout<<"\n\n\n     Deseas calcular otro?  ";cin>>res;
    while (res== "si" || res=="SI")
    {
          system("cls");
    f=1, nu,fac=1;
    cout<<"\n\n   Numero: ";
    cin>>nu;
    while(nu>=f)
    {
          fac=f*fac;
          f= f+1;
    }
    cout<<"\n\n     Su factorial es: "<<fac;
    cout<<"\n\n\n     Deseas calcular otro?  ";cin>>res;
    }
          return 0;
}
          
