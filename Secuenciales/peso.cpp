#include <iostream> 
#include <conio.h> 
using namespace std;
float orp, ton, lb, gr;
int main()
{
    cout<<"Aqui puedes calcular tu peso en toneladas, gramos y libras \n";
    cout<<"\n";
    cout<<"Cuanto pesas? ";
    cin>>orp;
    ton= orp/1000;
    lb= orp*2.204;
    gr= orp*1000;
    cout<<"\n";
    cout<<"Tu peso en Toneladas es: "<<ton<<"ton \n";
    cout<<"Tu peso en gramos es: "<<gr<<"gr \n";
    cout<<"Tu peso en libras es: "<<lb<<"lb \n";
    cout<<"\n";
    cout<<"Un placer poder ayudarte :)";
    getch();
}
