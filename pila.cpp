#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;

stack <string> pil;
int opcion;
string date;
int main()
{  
 system("color 3");
 while(opcion!=5)
 {
cout<<"\n    ";
cout<<"\n    U N i V E R S i D A D    P O L i T E C N i C A  De   D U R A N G O. ";    
cout<<"\n    ";
cout<<"\n                Programacion de Estructura de Datos.";
cout<<"\n                      Emmanuel Vazquez Pando.";
cout<<"\n                               Pilas.";                 
                    
cout<<"\n   Bienvenido. ";
cout<<"\n ";
cout<<"\n Que vas hacer? ";
cout<<"\n ";
cout<<"\n 1.- Hacer Pedido.";
cout<<"\n 2.- Mostrar ultimo pedido.";
cout<<"\n 3.- Entregar ultimo pedido.";
cout<<"\n 4.- Pedidos por entregar.";
cout<<"\n 5.- Salir...";
cout<<"\n    ";
cout<<"\n    ";
cin>>opcion;
system("cls");
switch(opcion)
{
case 1:
cout<<"\n    ";
cout<<"\n   ELIGE EL PEDIDO CON EL CODIGO SEGUIDO DEL PEDIDO. ";
cout<<"\n\n                                 Cual es el pedido?  ";
cout<<"\n\n\n\n\n    Costilla asada   (CAs).";
cout<<"\n    Pescado con Papas    (PesPa).";
cout<<"\n    Chuleta de cerdo    (Chu).";
cout<<"\n    Tacos dorados   (tados).";
cout<<"\n    Pollo rostizado   (porz).";
cout<<"\n    ";
cout<<"\n    ";
cin>>date;
pil.push(date);
cout<<"\n    ";
system("PAUSE");
system("cls");
 break;

case 2:
 if(pil.empty()==1)
 {
 cout<<"\n  No hay pedidos.  ";
 }
 else
 {
 cout<<"\n\n  Nuevo pedido: "<<pil.top();
 }
 cout<<"\n    ";
 cout<<"\n    ";
 system("PAUSE");
 system("cls");
 break;

case 3:
 
 
 cout<<"\n\n  Pedido entregado: "<<pil.top();
 pil.pop();
 cout<<"\n    ";
 cout<<"\n    ";
 system("PAUSE");
 system("cls");
 break;

case 4:
 if(pil.empty()==1)
 {
 cout<<"\n  No tenemos pedidos hasta el momento. ";
 }
 else
 {
   cout<<"\n\n Tienes "<<pil.size()<<" pedidos en puerta. ";
 }
 cout<<"\n    ";
 cout<<"\n    ";
 system("PAUSE");
 system("cls"); 
 break;

case 5:
     cout<<"\n\n\n      \n\n\n\n\n\n\n\n                             Termino el dia!";
break;
}
 }
getch();
}
