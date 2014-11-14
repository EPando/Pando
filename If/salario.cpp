#include<iostream>
#include<conio.h>
using namespace std;
int slr, hr, hrx,slrb;
int main ()
{
    cout<<"Hola, me darias las horas que has trabajado? ";
    cin>>hr;
    cout<<"\n";
    cout<<"\n";
    if (hr<=40)
    {
               slr= hr*16;
               cout<<"Trabajaste: "<<hr<<"hrs \n";
               cout<<"\n";
               cout<<"Tu salario entonces sera de: $"<<slr;
               cout<<"\n";
               cout<<"\n";
               cout<<"Presiona enter para salir del sistema ;)";
               }
               else
               {
                   hrx= (hr-40)*20;
                   slr=(40*16)+hrx;
                   cout<<"Trabajaste: "<<hr<<"hrs \n";
                   cout<<"\n";
                   cout<<"Tu salario sera entonces de: "<<slr;
                   cout<<"\n";
                   cout<<"\n";
                   cout<<"Presiona enter para salir del sistema ;)";
                   }
                   getch();
}
                   
                   
                   
                   
            
