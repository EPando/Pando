#include <iostream> 
#include <conio.h> 
using namespace std;
float op, a,l1,l2;
int main ()
{
     cout<<"Hola, tienes 3 opciones para calcular un area. \n";
     cout<<"\n";
     cout<<"1.- Triangulo \n";
     cout<<"2.- Cuadrado \n";
     cout<<"3.- Circulo \n";
     cout<<"4.- Salir \n";
     cout<<"\n";
     cin>>op;
     cout<<"\n";
     cout<<"\n";
     while(op<4 && op>=1)
     {
                if (op==1)
                {
                          cout<<"Bien elegiste el triangulo... \n";
                          cout<<"\n";
                          cout<<"Dame la base del triangulo: ";
                          cin>>l1;
                          cout<<"\n";
                          cout<<"Ahora dame la altura: ";
                          cin>>l2;
                          a= (l1*l2)/2;
                          cout<<"\n";
                          cout<<"el area de tu triangulo es: "<<a;
                          cout<<"\n";
                          cout<<"\n";
                          cout<<"Presiona 4 si quieres salir u otro numero para calcular otra area: ";
                          cin>>op;
                          cout<<"\n";
                }
                else
                {
                if (op==2)
                {
                          cout<<"Este es el del cuadrado \n";
                          cout<<"\n";
                          cout<<"Dame el lado del cuadrado: ";
                          cin>>l1;
                          cout<<"\n";
                          a= (l1*l1);
                          cout<<"\n";
                          cout<<"El area de tu cuadrado es: "<<a;
                          cout<<"\n";
                          cout<<"\n";
                          cout<<"Presiona 4 si quieres salir u otro numero para calcular otra area: ";
                          cin>>op;
                          cout<<"\n";
                }       
                else 
                {
                          cout<<"Este es el del circulo \n";
                          cout<<"\n";
                          cout<<"Dame el radio del circulo: ";
                          cin>>l1;
                          cout<<"\n";
                          a= (l1*l1)*3.1416;
                          cout<<"\n";
                          cout<<"El area de tu circulo es: "<<a;
                          cout<<"\n";
                          cout<<"\n";
                          cout<<"Presiona 4 si quieres salir u otro numero para calcular otra area: ";
                          cin>>op;
                          cout<<"\n";
                }
                }
                getch();
     }
}
