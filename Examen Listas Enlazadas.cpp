#include <iostream>
#include <string>
using namespace std;
int lugar;
int sz = 0;
struct dato
{
       string nom;
       dato *forward;
       };
dato *uno = NULL, *fin = NULL;
dato *xi = NULL, *nev = NULL;
void inicio() 
 {
      cout<<"\n    ";
      cout<<"\n    U N i V E R S i D A D    P O L i T E C N i C A  De   D U R A N G O. ";    
      cout<<"\n    ";
      cout<<"\n                Programacion de Estructura de Datos.";
      cout<<"\n                      Emmanuel Vazquez Pando.";
      cout<<"\n                          Listas Enlazadas.";  
      cout<<"\n\n                        Examen de Unidad.\n";
      cout<<"\n               Introduciras solo nombres :) \n";
      cout<<"\n 1.- Push. "; 
      cout<<"\n 2.- Pop.";
      cout<<"\n 3.- Size.";      
      cout<<"\n 4.- Top.";
      cout<<"\n 5.- Adios!.";
      cout<<"\n   ";
      cout<<"\n   "; 
      cin>>lugar;
 }
void intdat()
{
      nev = new dato;
      if(nev == NULL)
      {
      cout<< "Sin memoria Amigo! :/ \n";
      }
      else
      {
      cout<<"\n\n   Nombre: ";
      cin>>nev->nom;
      nev-> forward = NULL;
      }
}
int main()
{
otravez:
system("cls");
inicio();
switch (lugar)
{
     case 1:
          intdat();
          if(uno == NULL)
          {
          uno = nev;
          fin = nev;
          }
          else
          {
          fin-> forward = nev;
          fin=nev;
          }
          cout<<"\n   ";
          cout<<"\n   ";
          system ("PAUSE");
          goto otravez;  
     case 2:
          cout<<"\n   Borrado: "<<fin->nom;
          xi=uno;
          while(xi != NULL)
          {
          if(xi-> forward == fin)
          {
          xi->forward = NULL;
          }
          else
          {
          xi = xi-> forward;
          }
          }
          cout<<"\n   ";
          cout<<"\n   ";
          system ("PAUSE");
          goto otravez;
     case 3:
          xi= uno;
          while(xi != NULL)
          {
          sz= sz+1;
          }
          cout<<"\n    Tu pila es de "<<sz<<" registros";
          cout<<"\n   ";
          cout<<"\n   ";
          system ("PAUSE");
          goto otravez;

     case 4:
          cout<<"\n   Tu tope: "<< fin->nom;
          cout<<"\n   ";
          cout<<"\n   ";
          system ("PAUSE");
          goto otravez;
     default:
     
          break;
}



}
