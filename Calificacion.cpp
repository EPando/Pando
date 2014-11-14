#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
float med, prom;
int n, recor;
float v[10000], may[10000];
string res;
int main()
{
    system ("color 3");
    cout<<"\t UNIVERSIDAD POLITECNICA DE DURANGO \n";
    cout<<"\n";
    cout<<"\t INGENIERIA EN TELEMATICA 2[B] \n";
    cout<<"\n\t Emmanuel Vazquez Pando ";
    cout<<"\n";
    cout<<"\n";
    cout<<"\t Hola bienvenido al sistema! \n";
    cout<<"\n";
    cout<<"\n\t Sistema que calcula las calificaciones de un grupo ";
    cout<<"\n";
    cout<<"\n";
    cout<<"Registraras datos? (si-no) ";
    cin>>res;
    cout<<"\n";
    while (res=="si")
    {
          n=n+1;
          cout<<"  Dame la calificacion: ";
          cin>>v[n];
          cout<<"\n";
          cout<<"  Registraras mas datos? (si-no) ";
          cin>>res;
          cout<<"\n";
          med= med + v[n];
          prom= med/n;
    }
    cout<<"\n";
    for (recor=1; recor<=n; recor++)
    {
        if (v[recor] > prom )
        {
           may[recor] = v[recor];
           cout<<"Esta calificacion es mayor que el promedio grupal: "<<may[recor];
           cout<<"\n";
        }
    }
    cout<<"\n";
    cout<<" EL promedio de "<<n<<" calificaciones"<<" es de: "<<prom;
    cout<<"\n";
    cout<<"\n";
    cout<<" Gracias Vuelva pronto...\n";
    getch();
}       
