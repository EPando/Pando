#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int x=19, y;
int *p;
int main ()
{
p= &x;
cout<<"\n\n     El valor de x es: "<<*p;
y= *p + 3; 
getch();
}
