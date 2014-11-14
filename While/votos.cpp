#include <iostream> 
#include <conio.h> 
using namespace std;
float v, un, do, tr, e, res, por;
int main()
{
    cout<<"Hola, bienvenido a la eleccion \n";
    cout<<"\n";
    cout<<"Votaras? \n";
    cin>>res;
    if (res=1)
    {
    cout<<"Bien las instrucciones son: 1 para el primer candidato \n";
    cout<<"2 para el segundo candidato \n";
    cout<<"3 para el ultimo candidato \n";
    cin>>v;
    while(v>=1&&v<4)
    {
                    if (v==1)
                    {
                            un=un+1
                            }
                            else
                            {
                                if(v==2)
                                {
                                        do=do+1
                                        }
                                        
                                        else
                                        {
                                                 tr=tr=1
                                                 }
                                                 }
                                                 }
                    e=e+1;
    cout<<"Votaras? \n";
    cin>>res;
    }
}
    else
    {
        cout<<"Gracias por ejercer tu voto"
        }
        }
        if (un>do&&un>tr)
        {
                         por= (un/e)*100;
                         cout<<"El ganador es: El candidato numero 1 con: "<<por<<"% de los votos ejercidos";
                         }
                         else
                         {
                             if(do>un&&do>tr)
                             {
                             por= (do/e)*100;
                         cout<<"El ganador es: El candidato numero 2 con: "<<por<<"% de los votos ejercidos";
                         }
                         else
                         {
                         por= (un/e)*100;
                         cout<<"El ganador es: El candidato numero 3 con: "<<por<<"% de los votos ejercidos";
                         }
                         }
                         }
                         getch();
                         }
                         }
                                                 
