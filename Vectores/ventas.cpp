#include<iostream>
#include<conio.h>
using namespace std;
int i;
float sale[100],sum;
int main()
{
    
    for(i=1;i<=100;i=i+1)
    {
                   cout<<"La venta es: "<<i<<"\n";
                   cin>>sale[i];
                   sum=sum+sale[i];
    }
    cout<<"Presiona enter para salir (:";
    getch();
}



