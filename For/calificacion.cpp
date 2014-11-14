#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
float n,suma,sumaprom,prom,promgrup,calif,tc;
int main()
{

    suma=0;
    sumaprom=0;
    for (n=1;n<=10;n++)
    {
        suma=0;
        for (tc=1;tc<=7;tc++)
        {
            cout<<"\nDame "<<tc<<" calificacion del "<<n<<" alumno: ";
            cin>>calif;
            suma=suma+calif;
        }
        prom=0;
        prom=suma/7;
        sumaprom=sumaprom+prom;
        cout<<"\nEl promedio del "<<n<<" alumno es: \n"<<prom;
    }
    promgrup=sumaprom/10;
    cout<<"\n El promedio grupal es: "<<promgrup;
    cout<<"\n Da clic en enter para cerrar "<<promgrup;
    getch(); 
}
