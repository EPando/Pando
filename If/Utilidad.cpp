#include<iostream>
#include<conio.h>
using namespace std;
float sal, an,sne;
int main ()
{
    cout<<"Hola, dime cuantos anios llevas trabajando? ";
    cin>>an;
    cout<<"\n";
    cout<<"Bien ahora dime tu salario anual ";
    cin>>sal;
    if (an<=1)
    {
              sne=sal +(sal*.05);
              cout<<"Tu salario es: "<<sne;
              }
    else
    {
        if (1<an && an<=2)
        {
                             sne= sal +(sal*.07);
                             cout<<"Tu salario es: "<<sne;
        }
        else
        {
             if(2<an && an<=5)
             {
             sne= sal +(sal*.1);
             cout<<"Tu salario es: "<<sne;
             }
             else
             {
                    if (5<an && an<=10)
                    {
                    sne= sal +(sal*.15);
                    cout<<"Tu salario es: "<<sne;
                    }
                    else
                    {
                         if(an>=10)
                         {
                         sne= sal +(sal*.2);
                         cout<<"Tu salario es: "<<sne;
                         }
                    }
             }
        }
    }
    getch();
}
                                                               
