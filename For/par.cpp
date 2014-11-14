#include<iostream>
#include<conio.h>
using namespace std;
int n;
string res;
int main()
{
   do{
    cout<<"\n         Dame un numero: ";
    cin>>n;
    cout<<"\n";
    if(n%2==0)
    {
              cout<<"   El numero que me diste es Par...\n\n";
              }
              else
              {
                  cout<<"   Tu numero es Impar...\n\n";
                  }
    cout<<"\n   Me daras otro numero? ";
    cin>>res;
    }while (res=="si");
}
