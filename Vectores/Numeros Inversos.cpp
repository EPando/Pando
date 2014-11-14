#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int i;
int num[20],inv[20];
int main()
{
    
    for(i=1;i<=20;i=i+1)
    {
                   cout<<"Dame el numero: ";
                   cin>>num[i];
                   inv[i]=num[i]*(-1);
    }
        cout<<"Presiona enter para salir (:";
    getch();
}





