#include<iostream>
#include<conio.h>
using namespace std;
int i,f=0,e=0,d=0,g=0;
float califas[10][4];

int main()
{
for(i=1;i<=10;i++)
    {
                  cout<<"Dame el parcial 1 del alumno "<<i<<": ";
                  cin>>califas[i][1];
                  cout<<"\n";
                  cout<<"Dame el parcial 2 del alumno "<<i<<": ";
                  cin>>califas[i][2];
                  cout<<"\n";
                  cout<<"Dame el parcial 3 del alumno "<<i<<": ";
                  cin>>califas[i][3];
                  cout<<"\n";
                  califas[i][4]=(califas[i][1]+califas[i][2]+califas[i][3])/3;
                  if(califas[i][4]<=6)
                  {
                                  f=f+1;
                  }
                  if(califas[i][4]>6 && califas[1][4]<=8)
                  {
                                  d=d+1;
                  }
                  if(califas[i][4]>8 && califas[i][4]<=9)
                  {
                                  e=e+1;
                  }
                  if(califas[i][4]>9)
                  {
                                  g=g+1;
                  }
    }
    cout<<"Son "<<f<<" alumno(s) con promedio menor o igual a 6";
   cout<<"\n";
    cout<<"Son "<<d<<" alumno(s) con promedio mayor a 6 y menor o igual a 8";
    cout<<"\n";
    cout<<"Son "<<e<<" alumno(s) con promedio mayor a 8 y menor o igual a 9";
    cout<<"\n";
    cout<<"Son "<<g<<" alumno(s) con promedio mayor a 9";
    cout<<"\n";
    for(i=1;i<=10;i++)
    {
                      if(califas[i][4]>9)
                      {
                                      cout<<"El alumno "<<i<<" tiene promedio de "<<califas[i][4]<<"Pertenece a los mayores a 9 esta perrote ;)";
                      }
    }
    getch();
}                   
