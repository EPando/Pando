#include<iostream>
#include<conio.h>
using namespace std;
float nu1,nu2, ser;
int main()
{
    cout<<"Dame un numero \n";
    cin>>nu1;
    cout<<"Dame Otro Numero \n";
    cin>>nu2;
    if (nu1==nu2)
    {
                 ser= nu1*nu2;
                 cout<<"el resultado es: "<<ser;
    }
    else
    {
                 if (nu1>nu2)
                 {
                             ser= nu1-nu2;
                             cout<<"el resultado es: "<<ser;
                 }
                             else
                             {
                                 ser= nu1+nu2;
                                cout<<"el resultado es: "<<ser;
                             }
    }
                                 getch();
}
