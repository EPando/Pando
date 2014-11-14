#include<iostream>
#include<conio.h>
using namespace std;
int u, pos,neg,neu,c;
int main()
{
    for(c=1;c<21; c++)
    {
    cout<<"Hola dame un numero: ";
    cin>>u;
    if (u>0)
    {
            pos=pos+1;
            }
            else
            {
             if(u<0)
             {
                    neg=neg+1;
                    }
                    else
                    {
                        neu=neu+1;
                        }
                        }
                        }
                        cout<<"Tus numeros positivos son: "<<pos<<"\n";
                        cout<<"Tus numeros negativos: "<<neg<<"\n";
                        cout<<"Tus numeros neutros(osea el 0) son: "<<neu<<"\n";
getch();
}
