#include <iostream> 
#include <conio.h> 
using namespace std;
int var1,v1,v2,v3;
float comision;
float ttl;
int main ()
{
    cout<<"Que tal, me darias tu sueldo base? \n";
    cout<<"\n";
    cout<<"Sueldo Base: \n";
    cin>>var1;
    cout<<"\n";
    cout <<"Dame tu venta 1: \n";
    cin>>v1;
    cout<<"\n";
    cout<<"Dame la venta 2: \n";
    cin>>v2;
    cout<<"\n";
    cout<<"Dame la venta 3: \n";
    cin>>v3;
    cout<<"\n";
    comision=(v1+v2+v3)*.1;
    ttl= var1+comision;
    cout<<"Tu comision es: \n"<<comision<<"\n";
    cout<<"\n";
    cout<<"Total a percibir: \n"<<ttl<<"\n";
    getch();
}
