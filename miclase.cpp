#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
int opcion=0;

class territorio
{
      protected:
                string pais[9], continente[9], np, ct, cause;
                int dat[9][2], p1, p2;
                int p, a, en;
      public:
             void ceros()
             {
             pais[9]="-------";
             continente[9]="-------";
             dat[p][0]=0;
             dat[p][1]=0;
             dat[p][2]=0;
             p=0;
             a=0;
             en=0;
             }
             
             void ver()
             {
             cout<<"\n";
             for(p=0;p<=2;p++)
              {
              cout<<"\n";
              cout<<"  ---- Pais "<<pais[p];
              cout<<"\n";
              cout<<"  ---- Continente"<<continente[p];
              cout<<"\n";
              cout<<"  ---- Superficie "<<dat[p][0]<<" km2";
              cout<<"\n";
              cout<<"  ---- Habitantes "<<dat[p][1];
              cout<<"\n";
              cout<<"  ---- PIB "<<dat[p][2]<<"  billones $US";
              cout<<"\n";
              cout<<"-------------------------------------------";
              cout<<"\n";
             
              }
              cout<<"\n ";
              system("PAUSE");
              system("cls");
             }
             
             
             void checkin()
             {
             cout<<"\n Ingresa sus datos obtenidos. ";
             cout<<"\n";
              for(p=0;p<=2;p++)
              {
              cout<<"\n";
              cout<<"  ---- Pais ";
              cin>>pais[p];
              cout<<"\n";
              cout<<"  ---- Continente ";
              cin>>continente[p];
              cout<<"\n";
              cout<<"  ---- Superficie ";
              cin>>dat[p][0];
              cout<<"\n";
              cout<<"  ---- Habitantes ";
              cin>>dat[p][1];
              cout<<"\n";
              cout<<"  ---- PIB ";
              cin>>dat[p][2];
              cout<<"\n ";
              cout<<"-------------------------------------------";
              }
              cout<<"\n ";
              cout<<"\n ";
              system("PAUSE");
              system("cls");
             }
             
             void desarrollo ()
             {
             cout<<"\n";
             cout<<"\n Pais a Analizar: ";
             a=0;
             for(p=0;p<=2;p++)
             {
             cout<<"\n ";
             cout<<"    "<<a+1<<".-"<<pais[p];
             a=a+1;
             }
             cout<<"\n ";
             cin>>en;
             cout<<"\n ";
             if(dat[en-1][2]<=100)
             {
             cout<<" El pais "<<pais[en-1]<<" esta en Subdesarrollo";
             cout<<"\n Informar a las Naciones Unidas.";
             }
             else
             {
              cout<<" El pais "<<pais[en-1]<<" es un Pais con desarrollo, puede ser base capital para la ONU.";
             }
             cout<<"\n ";
             cout<<"\n ";
             system("PAUSE");
             system("cls");
             }
             
             void extension()
             {
             cout<<"\n";
             cout<<"\n Paises a Comparar: ";
             a=0;
             for(p=0;p<=2;p++)
             {
             cout<<"\n ";
             cout<<"    "<<a+1<<".-"<<pais[p];
             a=a+1;
             }
             cout<<"\n";
             cout<<"   ----: ";
             cin>>p1;
             cout<<"\n";
             cout<<"\n    y: ";
             cin>>p2;
             if(dat[p1-1][0]>dat[p2-1][0])
             {
             cout<<"\n El pais "<<pais[p1-1]<<" es mas grande que: "<<pais[p2-1];
             }
             else
             {
             cout<<"\n El pais "<<pais[p2-1]<<" es mas grande que: "<<pais[p1-1];
             }
             cout<<"\n ";
             cout<<"\n ";
             system("PAUSE");
             system("cls");
             }
             
             void informe()
             {
             cout<<"\n Pais: ";
             cin>>np;
             cout<<"\n Continente: ";
             cin>>ct;
             cout<<"\n Causa: ";
             cin>>cause;
             cout<<"\n ";
             cout<<"\n Informe a la ONU: ";
             cout<<"\n ";
             cout<<"\n El pais de "<<np<<" se encuentra en zona de: "<<cause<<" se le pide a las Naciones Unidas a enviar ayuda al continente "<<ct;
             cout<<"\n ";
             cout<<"\n Enviar informe. ";
             cout<<"\n ";
             cout<<"\n ";
             system ("PAUSE");
             system("cls");
             }
};

territorio ter[1];

void menu()
{
system("color 3");
cout<<"\n ";
cout<<"\n              Universidad Politecnica de Durango.";
cout<<"\n ";
cout<<"\n                       Estructura de Datos.";
cout<<"\n                      Emmanuel Vazquez Pando.";
cout<<"\n                       Base de Datos Mundial.";
cout<<"\n ";
cout<<"\n              Que deseas Hacer? ";
cout<<"\n                                     (: ";
cout<<"\n ";
cout<<"\n              1.- Ver datos. ";
cout<<"\n              2.- Ingresar Informes. ";
cout<<"\n              3.- Ver su desarrollo. ";
cout<<"\n              4.- Comparar Territorio. ";
cout<<"\n              5.- Enviar Informe a la ONU. ";
cout<<"\n              6.- Salir.";
cout<<"\n ";
cout<<"\n ";
cin>>opcion;
}

int main()
{
ter[0].ceros();

borrar:
system("cls");
menu();

switch(opcion)
{
  case 1:ter[0].ver(); goto borrar;
  case 2:ter[0].checkin(); goto borrar;
  case 3: ter[0].desarrollo(); goto borrar;
  case 4: ter[0].extension(); goto borrar;
  case 5: ter[0].informe(); goto borrar;

}


}
