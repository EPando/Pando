#include<iostream>
#include<conio.h>
using namespace std;
float eda,ant;
int main()
{
    cout<<"Hola!!!  Tu Edad es: ";
    cin>>eda;
    if (eda>=60)
    {
                cout<<"Cuantos anios llevas de servicio? ";
                cin>>ant;
                if (ant>=25)
                {
                            cout<<"Estas Jubilado por mucho tiempo trabajando...";
                }
                else
                {
                                cout<<"Estas jubilado por edad...";
                }
                }
    else
    {
                    cout<<"Cuantos anios llevas trabajando? ";
                    cin>>ant;
                if (ant>=25)
                 {
                                cout<<"Tienes una Jubilacion Joven...";
                 }
                 else
                 {
                                  cout<<"No estas jubilado, sigue trabajando flojo!!!!";
                 }
    }
getch();
}
                
