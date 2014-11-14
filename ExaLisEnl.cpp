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
dato *li = NULL, *nev = NULL;
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
      cout<<"\n 1.- Introduce el pedido. "; 
      cout<<"\n 2.- Sacar pedido.";
      cout<<"\n 3.- Cantidad de Pedidos.";      
      cout<<"\n 4.- Pedido entrante.";
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
      cout<<"\n  De que sera el pedio (Introduce las Siglas):";
      cout<<"\n   Pollo y papas (polpa)";
      cout<<"\n   Tacos Dorados (TacDo) ";
      cout<<"\n   Pulpo en su tinta (Pulti)";
      cout<<"\n                                   ";
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
          if(uno == NULL)
          {
           cout<<"\n   Lo siento no has introducido pedidos! (empty)";
          }
          else
          {
          cout<<"\n   Entregado: "<<fin->nom;
          li=uno;
          while(li != NULL)
          {
          if(fin == uno)
          {
          uno = NULL;
          }
          if(li-> forward == fin)
          {
          li->forward = NULL;
          fin = li;
          }
          else
          {
          li = li-> forward;
          }
          }
          }
          cout<<"\n   ";
          cout<<"\n   ";
          system ("PAUSE");
          goto otravez;
     case 3:
          sz = 0;
          if(uno == NULL)
          {
           cout<<"\n   Lo siento no hay pedidos! (empty)";
          }
          else
          {
          li=uno;
          while(li != NULL)
          {
          sz= sz+1;
          li=li->forward;
          }
          cout<<"\n    Tienes "<<sz<<" pedidos";
          }
          cout<<"\n   ";
          cout<<"\n   ";
          system ("PAUSE");
          goto otravez;

     case 4:
          if(uno == NULL)
          {
           cout<<"\n   Lo siento sin pedidos! (empty)";
          }
          else
          {
          cout<<"\n   Pedido entrante: "<< fin->nom;
          }
          cout<<"\n   ";
          cout<<"\n   ";
          system ("PAUSE");
          goto otravez;
     default:
     
          break;
}



}
