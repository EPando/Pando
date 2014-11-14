#include<iostream>
#include<conio.h>
#include<queue>
using namespace std;
int main ()
{
    int resp,n,l=0, i;
    string resp1,co;
    queue <int> num;
    queue <string> con;
    queue <int> numc;
    queue <string> conc;
    cout<<"\n\n\n\n\n";
    cout<<"                       UNIVERSIDAD POLITECNICA DE DURANGO\n\n";
    cout<<"                       Programacion y estructura de datos\n\n";
    cout<<"                       Facilitador: MTI Roobed Trejo Mier\n\n";
    cout<<"                       Alumnos: Nestor Martin Cabrales Ortiz\n\n";
    cout<<"                       COLAS\n\n";
    system("PAUSE");
    system("cls");
    menu:
         system("cls");
    cout<<" \n\n\t\t                      AGENDA TELEFONICA";
    cout<<"\n\n\t\t1.- Ingresar nuevo telefono \n\t\t2.- Eliminar primer registro\n\t\t3.- Numero de contactos agregados\n\t\t4.- Ultimo telefono agregado\n\t\t5.- Primer telefono agregado\n\t\t6.- Mostrar todos los contactos\n\t\t7.- SALIR";
    cout<<"\nIngrese el numero de la opcion deseada\n";
    cin>>resp;
    system("cls");
    if (resp==1)
    {
                if (num.empty()==1 && con.empty()==1)
                {
                                    cout<<"\n\n\n\t\tLa agenda esta vacia\n\n";
                                    }
                                    else
                                    {
                                        cout<<"La agenda tiene valores\n\n";
                                              }
                                              
              cout<<"\n\n\n\t\tDesea agregar telefono?\n";
              cin>>resp1;
              system("cls");
              while(resp1=="si")
              {
              cout<<"\n\n\n\t\tIngrese el numero de telefono\n\n618";
              cin>>n;
             num.push(n);
             cout<<"\t\tIngrese el nombre del contacto\n\n";
             cin>>co;
             con.push(co);
              system("PAUSE");
              goto menu;
             }
             }
    if (resp==2)
    {
                num.pop();
                con.pop();
                goto menu;
                }
   if (resp==3) 
   {
                cout<<"\n\n\n\t\tNumeros de contactos: "<<num.size()<<"\n\n";
                system("PAUSE");
              goto menu;
                }
   if (resp==4)
   {
               cout<<"\n\n\n\t\tNombre: "<<con.back()<<"\n";
               cout<<"\t\tTelefono: 618"<<num.back()<<"\n\n";
               system("PAUSE");
              goto menu;
              }
   if (resp==5)
   {
               cout<<"\n\n\n\t\tNombre: "<<con.front()<<"\n\n";
               cout<<"\t\tTelefono: 618"<<num.front()<<"\n\n";
               system("PAUSE");
              goto menu; 
               }
   if (resp==6)
   {
               
               conc=con;
               numc=num;
               while(num.size()!=0)
               {
               l++;
               cout<<"\n\n\n\t\tContacto # "<<l<<": \n";
               cout<<"\t\tNombre: "<<con.front()<<"\n";
               cout<<"\t\tTelefono: 618"<<num.front()<<"\n";
               num.pop();
               con.pop();
              
              }
               system("PAUSE");
              goto menu;
               }
} 
