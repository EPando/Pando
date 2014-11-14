#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int i, j, k, p, temp, op;
const int  limit = 10;
int matrix[limit];
int primero, ultimo;
int central;

int muestra()
{
     for(int i=0;i<limit;i++)
    {        
       cout<<matrix[i]<<endl<<endl;
    }
    cout<<endl;
    system ("pause");
}

int colocar(int v[], int b, int t)
{
    int i;
    int pivote, valor_pivote;
    int temp;
 
    pivote = b;
    valor_pivote = v[pivote];
    for (i=b+1; i<=t; i++)
    {
        if (v[i] < valor_pivote)
        {
             pivote++;    
             temp=v[i];
             v[i]=v[pivote];
             v[pivote]=temp;
 
        }
    }
    temp=v[b];
    v[b]=v[pivote];
    v[pivote]=temp;
    return pivote;
} 
 
void Quicksort(int v[], int b, int t)
{
     int pivote;
     if(b < t)
     {
        pivote=colocar(v, b, t);
        Quicksort(v, b, pivote-1);
        Quicksort(v, pivote+1, t);
     }
}

main()
{
    cout<<"\t      J a i m e   A r t u r o   C a n a l e s   G o n z a l e z"<<endl;
    cout<<endl;
    cout<<"\t\tV i c t o r   D a v i d   M e d r a n o   M o l i n a"<<endl;
    cout<<endl;
    j:
    cout<<"\t\t\t  M e t o d o   Q u i c k s o r t"<<endl;
    cout<<endl;
    cout<<endl;
    for(int i=0;i<limit;i++)
    {        
         system("color 07");
         cout<<"Ingresa el numero "<<i+1<<": ";
         cin>>matrix[i];
    }
    system("cls");
    system("color 30");
    cout<<"Numeros no ordenados"<<endl;
    cout<<endl;
    cout<<endl;
    muestra();
    system("cls");
    system("color 03");
    cout<<"Numeros ordenados"<<endl;
    cout<<endl;
    cout<<endl;
    Quicksort(matrix,0,limit-1);
    muestra();
    system("cls");
    cout<<"Presiona la Q para agregar nuevos numeros";
    getch();
    system("cls");
    goto j;
}
