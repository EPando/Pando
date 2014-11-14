#include<iostream>
#include<conio.h>
using namespace std;
int i,e=1,n,j=1,contru,tru;
float primin[1001];
int main()
{

    for(i=1;i<=1001;i=i+1)
    {
                          for(n=1;n<=i;n++)
                          {
                                       tru=i%e;
                                       if (tru==0)
                                       {
                                                  contru=contru+1;
                                                  e=e+1;
                                       }
                                       if (contru==2)
                                       {
                                       primin[j]=i;
                                       }
                          }
    j=j+1;
    }
    cout<<"Tus numeros estan a salvo ;) \n";
    cout<<"Presiona enter para salir...\n";
    getch();
}
