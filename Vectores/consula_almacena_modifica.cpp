#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int i,j,rsp,x,y;
    string agn[10][3],bus;
    char n;
int main()
{
    
    cout<<"Si es la primera vez que lo usas teclea 1\n";
    cout<<"1.Introducir los 10 agendados.\n";
    cout<<"2.Consultar un dato.\n";
    cout<<"3.Modificar algun dato.\n";
    cin>>rsp;

    {
               for(i=1;i<=10;i=i+1)
               {
                   cout<<"\nDame el nombre del "<<i<<"\n";
                   cin>>agn[i][1];
                   cout<<"\nDame el telefono del "<<i<<"\n";
                   cin>>agn[i][2];
                   cout<<"\nDame el direccion del "<<i<<"\n";
                   cin>>agn[i][3];
                   cout<<"Quieres ir al menu?";
                   cin>>rsp;
               }

               cout<<"Dime el dato que buscas\n";
               cin>>bus;
               for(i=1;i<=10;i=i+1)
               {
                                   for(j=1;j<=3;j++)
                                   {

                                                    {
                                                      cout<<"Los datos de la persona son \n";
                                                      cout<<"Nombre:"<<agn[i][1]<<"\n";
                                                      cout<<"Telefono:"<<agn[i][2]<<"\n";
                                                      cout<<"Direccion:"<<agn[i][3]<<"\n";
                                                      cout<<"Quieres ir al menu?";
                                                      cin>>rsp;
                                                    }
                                   }                      
               }


    {
               cout<<"Menu \n";
               cout<<"1.Modificar Nombre";
               cout<<"2.Modificar Telefono.";
               cout<<"3.Modificar Direccion.";
               cout<<"\nDame el numero del menu que quieres hacer: \n";
               cin>>x;
               cout<<"Los datos actuales son:\n";
               for(i=1;i<=10;i++)
               {
                                 for(j=1;j<=3;j++)
                                 {
                                 cout<<"\n"<<i<<" "<<agn[i][1]<<" "<<agn[i][2]<<" "<<agn[i][3]<<"\n";
                                 }
               }
               cout<<"Dame el numero de persona donde modificaras el dato: ";
               cin>>y;
               cout<<"Dame el nuevo dato: ";
               cin>>agn[y][x];
               cout<<"Quieres ir al menu?";
               cin>>rsp;
    }
    cout<<"Presiona enter para salir...";
    getch();
}
}
