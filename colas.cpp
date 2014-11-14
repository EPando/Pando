/*
  Name: colas
  Copyright: Pandion
  Author: Emmanuel Vazquez Pando
  Date: 14/02/12 18:06
  Description: 
*/

#include<iostream>
#include<conio.h>
#include<queue>
#include<string>
using namespace std;

queue<string> col, clo;
int entro;
string entra;
int main()
{
    system("color 5");
    while(entro != 6)
    {
cout<<"\n   U N i V E R S i D A D   P O L i T E C N i C A    D E    D U R A N G O   ";
cout<<"\n\n                 Programacion y Estructura de Datos.             ";    
cout<<"\n                       Emmanuel Vazquez Pando. ";
cout<<"\n                         Introducir cosas. ";
cout<<"\n\n\n\n          Hola que quieres hacer? ";
cout<<"\n 1.- Meter cosas :S ";
cout<<"\n 2.- Sacar Cosas :( ";
cout<<"\n 3.- Ver la primera cosa que entro :) ";
cout<<"\n 4.- Ver ultima cosa que entro :/ ";
cout<<"\n 5.- Ver cuantas cosas tienes ;9 ";
cout<<"\n 6.- Salir.";
cout<<"\n ";
cout<<"\n     "; 
cin>>entro;
cout<<"\n ";
switch(entro)
{
        case 1: 
        cout<<"\n  Baul Abierto ";
        cout<<"\n\n Introduce la cosa: ";
        cin>>entra;
        col.push(entra);
        cout<<"\n     ";
        cout<<"\n     ";
        system("PAUSE");
         system("cls");
         break;
        case 2:
             if(col.empty()==1)
             {
             cout<<"\n Disculpa no has abierto el baul! ";
             }
             else
             {
             cout<<"\n Ya sacaste esta cosa: "<<col.front();
             col.pop();
             }
             cout<<"\n     ";
             cout<<"\n     ";
             system("PAUSE");
             system("cls");
             break;
        case 3:
             if(col.empty()==1)
             {
              cout<<"\n Disculpa no has abierto el baul! ";
             }
             else
             {
             cout<<"\n Esto es lo primero que metiste: "<<col.front();
             }
             cout<<"\n     ";
             cout<<"\n     ";
             system("PAUSE");
             system("cls");
             break;
        case 4:
             if(col.empty()==1)
             {
              cout<<"\n Disculpa no has abierto el baul! ";
             }
             else
             {
             cout<<"\n Esto es lo ultimo que metiste: "<<col.back();
             }
             cout<<"\n     ";
             cout<<"\n     ";
             system("PAUSE");
             system("cls");
             break;
        case 5:
             cout<<"\n     Has metido:";
             clo=col;
             while(!clo.empty())
             {
             cout<<"\n     "<<clo.front();
             clo.pop();
             }
             cout<<"\n     ";
             cout<<"\n    Son "<<col.size()<<" cosas hasta el momento.";
             clo=col;
             cout<<"\n     ";
             cout<<"\n     ";
             system("PAUSE");
             system("cls");
             break;
        case 6:
             system("cls");
             cout<<"\n\n\n      \n\n\n\n\n\n\n\n                             Baul cerrado!";
             break;
        default:
                cout<<"error intente de nuevo";     
}
}
getch();
}
