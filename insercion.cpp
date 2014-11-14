#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct prueva
{
       int v;
       prueva *vamos;
       };
prueva *mayor= NULL, *menor= NULL, *nu= NULL, *help = NULL;
int vec[50], dos=1, v,f;
int main()
{
vin:
    system("cls");
    cout<<"\n   ";
    cout<<"\n   ";
    cout<<"\n 1.- Ingresar Numero. "; 
    cout<<"\n 2.- Mostrar Numero.";
    cout<<"\n 3.- Salir."; 
    cout<<"\n     ";
    cin>>f;


switch (f)
{
       case 1:
            nu = new prueva;
            if(nu == NULL)
               {
                  cout<<"\n   Sin espacio en Memoria... :/ ";     
               }
               else
               {
                cout<<"\n   ";
                cout<<"\n   Number: ";
                cin>>nu->v;
                nu->vamos = NULL;
               }
            if(mayor == NULL)
               {
               menor = nu;
               mayor = nu;
               }
               else  
               {
               if(nu->v > mayor->v)
               {
               nu->vamos=menor;
               mayor = nu;
               }
               else
               {
               menor = nu;
               mayor->vamos = menor;
               }
               }
            cout<<"\n   AGREGADO ";
            cout<<"\n   ";
            cout<<"\n   ";
            system ("PAUSE");
            goto vin;
       case 2:
            if(mayor == NULL)
               {
               cout<<"\n   No hay contactos!!!";
               }
               else
               {
               help=mayor;
                while(help!=NULL)
                {
                 cout<<"\n   ";
                 cout<<"\n NUMBER: "<<help->v;
                mayor = mayor->vamos;
                }
               }
               cout<<"\n   ";
               cout<<"\n   ";
               system("pause");
            goto vin;
            
       case 3:
            
            break;
       }
}
