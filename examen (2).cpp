#include<iostream>
#include<conio.h>
#include<stack>
#include<queue>
#include<string>
using namespace std;

queue <int> entrada;
stack <int> peq;
stack <int> med;
stack <int> grand;
int ven, o=1, c=1, p=1, m=1, g=1, f;
string nc[100], np[100], nm[100], ng[100], busca;

int main ()
{
    system("color 5");
while(ven!= 4)
{
cout<<"\n   U N i V E R S i D A D   P O L i T E C N i C A    D E    D U R A N G O   ";
cout<<"\n\n                 Programacion y Estructura de Datos.             ";    
cout<<"\n                       Emmanuel Vazquez Pando. ";
cout<<"\n                          Examen 2da Unidad. "; 
cout<<"\n\n\n\n          Bienvenido, quieres hacer? ";
cout<<"\n 1.- Registrar Paquete.";
cout<<"\n 2.- Acomodar Paquetes. ";
cout<<"\n 3.- Entregar Paquete. ";
cout<<"\n 4.- Salir.";
 cout<<"\n     ";
cin>>ven;
switch(ven)
{
        case 1:
             cout<<"\n  Nombre del Cliente: ";
             cin>>nc[o];
             o=o+1;
             cout<<"\n  Tipo de paquete: ";
             cout<<"\n 1.- Pequeno    ";
             cout<<"\n 2.- Mediano    ";
             cout<<"\n 3.- Grande    ";
             cout<<"\n     ";
             cin>>f;
             entrada.push(f);
             cout<<"\n     ";
             cout<<"\n     ";
             system("PAUSE");
             system("cls");
             break; 
        case 2:
             if(entrada.empty()==1)
             {
             cout<<"\n Disculpa no Tenemos paquetes que acomodar! ";
             }
             else
             {
             while(entrada.empty()==0)
             {
              if(entrada.front()==1)
              {
              peq.push(entrada.front());
              entrada.pop();
              np[p]=nc[c];
              p=p+1;
              }
              if(entrada.front()==2)
              {
              med.push(entrada.front());
              entrada.pop();
              nm[m]=nc[c];
              m=m+1;
              }
              if(entrada.front()==3)
              {
              grand.push(entrada.front());
              entrada.pop();
              ng[g]=nc[c];
              g=g+1;
              }
             c=c+1;
             }
             cout<<"\n Paquetes acomodados...";
             cout<<"\n     ";
             cout<<"\n  Tienes "<<peq.size()<<" paquetes pequenos.";
             cout<<"\n  Tienes "<<med.size()<<" paquetes medianos.";
             cout<<"\n  Tienes "<<grand.size()<<" paquetes grandes.";
             }
             cout<<"\n     ";
             cout<<"\n     ";
             system("PAUSE");
             system("cls");
             break;
        case 3:
             cout<<"\n  Nombre del Cliente: ";
             cin>>busca;
             cout<<"\n  Tipo de paquete: ";
             cout<<"\n 1.- Pequeno    ";
             cout<<"\n 2.- Mediano    ";
             cout<<"\n 3.- Grande    ";
             cin>>f;
             if(f==1)
             {
             peq.pop();
             }
             if(f==2)
             {
             med.pop();
             }
             if(f==3)
             {
             grand.pop();
             }            
             cout<<"\n     ";
             cout<<"\n Aqui esta su paquete, vuelva Pronto!  ";
             cout<<"\n     ";
             cout<<"\n Paquetes acomodados  en este momento...";
             cout<<"\n     ";
             cout<<"\n  Tienes "<<peq.size()<<" paquetes pequenos.";
             cout<<"\n  Tienes "<<med.size()<<" paquetes medianos.";
             cout<<"\n  Tienes "<<grand.size()<<" paquetes grandes.";
             cout<<"\n     ";
             cout<<"\n     ";
             system("PAUSE");
             system("cls");
             break;
        case 4:
             system("cls");
             cout<<"\n\n\n      \n\n\n\n\n\n\n\n                             Termino el Dia!";
             break;  
                  
default:
      cout<<"\n     ";
      cout<<"error intente de nuevo";
      cout<<"\n     "; 
}
}
getch();
}

