#include <iostream> 
#include <conio.h> 
using namespace std;
float opc, od, p,l1,l2;
int main ()
{
     cout<<"Hola, Que quieres calcular? \n";
     cout<<"\n";
     cout<<"1.- Perimetros \n";
     cout<<"2.- Areas \n";
     cout<<"3.- Salir \n";
     cin>>opc;
     while(opc<4 && opc>=1)
     {
                 if(opc==1)
                 {
                 cout<<"Hola, tienes 3 opciones para calcular un perimetro. \n";
                     cout<<"\n";
                     cout<<"1.- Triangulo \n";
                     cout<<"2.- Cuadrado \n";
                     cout<<"3.- Circulo \n";
                     cout<<"4.- Regresar \n";
                     cin>>od;
                     cout<<"\n";

                     while (od<5&&od>=1)
                     {
                           if(od==1)
                           {
                          cout<<"Bien elegiste el triangulo... \n";
                          cout<<"\n";
                          cout<<"Dame el lado del triangulo: ";
                          cin>>l1;
                          cout<<"\n";
                          p= l1+l1+l1;
                          cout<<"\n";
                          cout<<"el perimetro de tu triangulo es: "<<p;
                          cout<<"\n";
                          cout<<"\n";
                          cout<<"Presiona 4 si quieres regresar u otro numero para calcular otro perimetro: ";
                          cin>>od;
                          cout<<"\n";
                       
                          }
                          else
                          {
                              if (od==2)
                              {
                          cout<<"Bien elegiste el cuadrado... \n";
                          cout<<"\n";
                          cout<<"Dame el lado del cuadrado: ";
                          cin>>l1;
                          cout<<"\n";
                          p= l1+l1+l1+l1;
                          cout<<"\n";
                          cout<<"el perimetro de tu cuadrado es: "<<p;
                          cout<<"\n";
                          cout<<"\n";
                          cout<<"Presiona 4 si quieres regresar u otro numero para calcular otro perimetro: ";
                          cin>>od;                        
                          }
                          else
                          {
                              if(od==3)
                              {
                          cout<<"Bien elegiste el circulo... \n";
                          cout<<"\n";
                          cout<<"Dame el diametro del circulo: ";
                          cin>>l1;
                          cout<<"\n";
                          p= l1* 3.1416;
                          cout<<"\n";
                          cout<<"La circunferencia de tu circulo es: "<<p;
                          cout<<"\n";
                          cout<<"\n";
                          cout<<"Presiona 4 si quieres regresar u otro numero para calcular otro perimetro: ";
                          cin>>od;
                          }
                          else
                          {
     cout<<"Hola, Que quieres calcular? \n";
     cout<<"\n";
     cout<<"1.- Perimetros \n";
     cout<<"2.- Areas \n";
     cout<<"3.- Salir \n";
     cin>>opc;
     }
     }
     }
     }
     }
     else
     {
         cout<<"Hola, tienes 3 opciones para calcular un area. \n";
                     cout<<"\n";
                     cout<<"1.- Triangulo \n";
                     cout<<"2.- Cuadrado \n";
                     cout<<"3.- Circulo \n";
                     cout<<"4.- Regresar \n";
                     cin>>od;
                     cout<<"\n";
                          
                     while (od<5&&od>=1)
                     {
                           if(od==1)
                           {
                          cout<<"Bien elegiste el triangulo... \n";
                          cout<<"\n";
                          cout<<"Dame la base del triangulo: ";
                          cin>>l1;
                          cout<<"\n";
                          cout<<"Dame la altura del triangulo: ";
                          cin>>l2;
                          p=(l1*l2)/2;
                          cout<<"\n";
                          cout<<"el area de tu triangulo es: "<<p;
                          cout<<"\n";
                          cout<<"\n";
                          cout<<"Presiona 4 si quieres regresar u otro numero para calcular otra area: ";
                          cin>>od;
                                                
                          }
                          else
                          {
                              if (od==2)
                              {
                          cout<<"Bien elegiste el cuadrado... \n";
                          cout<<"\n";
                          cout<<"Dame el lado del cuadrado: ";
                          cin>>l1;
                          cout<<"\n";
                          p= l1*l1;
                          cout<<"\n";
                          cout<<"el area de tu cuadrado es: "<<p;
                          cout<<"\n";
                          cout<<"\n";
                          cout<<"Presiona 4 si quieres regresar u otro numero para calcular otro perimetro: ";
                          cin>>od;
                          
                          }
                          else
                          {
                              if(od==3)
                              {
                          cout<<"Bien elegiste el circulo... \n";
                          cout<<"\n";
                          cout<<"Dame el radio del circulo: ";
                          cin>>l1;
                          cout<<"\n";
                          p= (l1*l1)* 3.1416;
                          cout<<"\n";
                          cout<<"El area de tu circulo es: "<<p;
                          cout<<"\n";
                          cout<<"\n";
                          cout<<"Presiona 4 si quieres regresar u otro numero para calcular otro perimetro: ";
                          cin>>od;
                          
                          }
                          else
                          {
     cout<<"Hola, Que quieres calcular? \n";
     cout<<"\n";
     cout<<"1.- Perimetros \n";
     cout<<"2.- Areas \n";
     cout<<"3.- Salir \n";
     cin>>opc;
     }
     }
     }
     }
     }
     cin>>opc;
        getch();
}
                     }
