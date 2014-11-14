#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,intervalo,aux;
    int numbers[10];
    
    
    for(i=0;i<10;i++)
    {
                     cout<<"Dame el numero "<<i<<" ";
                     cin>>numbers[i];
                     cout<<"\n";
    }
    
    
    cout<<"\n\n\n\nSIN ORDENAR\n\n\n";//Mostrar Desordenados;
    for(i=0;i<10;i++)
    {
                     cout<<"\n\t\t\tDato "<<i<<": "<<numbers[i];
    }
    
    
    
    
    cout<<"\n\n\n\nORDENADOS\n\n\n";//Hacer proceso 
    intervalo=3;
    while(intervalo>0)
    {
          for (i=0;i<10;i++)
          {
              j=i;
              aux=numbers[i];
              while ((j>=intervalo) && (numbers[j-intervalo]>aux))
              {
                  numbers[j]=numbers[j-intervalo];
                  j=j-intervalo;
              }
              numbers[j]=aux;
          }
      if (intervalo/2 != 0)
      {
            intervalo=intervalo/2;
      }
      else
      {
            if (intervalo==1)
            {
                  intervalo=0;
            }
            else
            {
                  intervalo=1;
            }
      }
    }
    
    
    
    for(j=0;j<10;j++)
    {
                 cout<<"\n\t\t\tDato "<<j<<": "<<numbers[j];    
    }
    cout<<"\n\n\nPresionar ENTER para salir del programa";
    getch();
}
