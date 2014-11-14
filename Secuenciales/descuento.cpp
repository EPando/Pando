#include <iostream> 
#include <conio.h> 
using namespace std;
float pag;
float ttl;
int main ()
{
      cout<<"Quieres saber tu descuento??? \n";
      cout<<"\n";
      cout<<"Dime, cuanto pagaste? \n";
      cin>>pag;
      ttl= (pag*.85);
      cout<<"\n";
      cout<<"Tu total a pagar: \n"<<"$"<<ttl<<"\n";
      cout<<"\n";
      cout<<"Presiona enter para salir :)";
      getch ();
      
}
      
      
