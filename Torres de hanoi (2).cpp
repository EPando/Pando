#include "iostream"
#include "conio.h"
#include "stack"
using namespace std;
int i,n,bandera=1,topa,topo,topd;
stack <int> origen;
stack <int> auxiliar;
stack <int> destino;

int main()
{                            
    cout<<"\n\n\t\tDame la cantidad de disco que utilizaras: ";
    cin>>n;
    i=0;
    while(origen.size() != n)//llenamos la torre de origen con el numero de discos introducido
    {
                   origen.push(n-i);
                   i++;        
    }
    i=1;
    system("cls");
    while(destino.size() != n)
    {
                     if((i%2) != 0) //conteo de las iteraciones
                     {
                               if((n%2)==0)//mover el 1 en discos impar
                               {
                                                   if(bandera==1)
                                                   {
                                                                     auxiliar.push(origen.top());
                                                                     origen.pop();
                                                                     bandera++;
                                                   }
                                                   else
                                                   {
                                                       if(bandera==2)
                                                       {
                                                                     destino.push(auxiliar.top());
                                                                     auxiliar.pop();
                                                                     bandera++;
                                                       }
                                                       else
                                                       {
                                                                     origen.push(destino.top());
                                                                     destino.pop();
                                                                     bandera=1;
                                                       }
                                                   }             
                               }
                               else //mover el 1 en discos pares.
                               {
                                   if(bandera==1)
                                   {
                                    destino.push(origen.top());
                                    origen.pop();
                                    bandera++;
                                   }
                                   else
                                   {
                                       if(bandera==2)
                                       {
                                        auxiliar.push(destino.top());
                                        destino.pop();
                                        bandera++;
                                       }
                                       else
                                       {
                                           origen.push(auxiliar.top());
                                           auxiliar.pop();
                                           bandera=1;
                                       }
                                   }
                               }
                               
                     }
                     else// mover los demas discos.
                     {
						 if(origen.empty() != true) //Importante si una esta vacia y el movimiento no se hace y se muestra un tope no se hace nada.
						 {
                                 if(origen.top()==1)// cuando el 1 este en origen.
                                 {
                                               if(auxiliar.empty()==true)
                                               {
                                                                  auxiliar.push(destino.top());
                                                                  destino.pop();
                                               }
                                               else
                                               {
                                                   if(destino.empty()==true)
                                                   {
                                                                      destino.push(auxiliar.top());
                                                                      auxiliar.pop();
                                                   }
                                                   else
                                                   {
                                                       topa=auxiliar.top();
                                                       topd=destino.top();
                                                       if(topa>topd)
                                                       {
                                                                auxiliar.push(destino.top());
                                                                destino.pop();
                                                       }
                                                       else
                                                       {
                                                                destino.push(auxiliar.top());
                                                                auxiliar.pop();
                                                       }
                                                   }
											   }
								 }
						 }
								 if(auxiliar.empty() != true){
                                     if(auxiliar.top()==1)// cuando el 1 este en auxiliar.
                                     {
                                               if(origen.empty()==true)
                                               {
                                                                  origen.push(destino.top());
                                                                  destino.pop();
                                               }
                                               else
                                               {
                                                   if(destino.empty()==true)
                                                   {
                                                                      destino.push(origen.top());
                                                                      origen.pop();
                                                   }
                                                   else
                                                   {
                                                       
                                                       if(origen.top()>destino.top())
                                                       {
                                                                origen.push(destino.top());
                                                                destino.pop();
                                                       }
                                                       else
                                                       {
                                                           destino.push(origen.top());
                                                           origen.pop();
                                                       }
                                                   }
                                               }
                                      }
								 }
								 if(destino.empty() != true)
								 {
                                          if(destino.top()==1)// cuando el uno este en destino.
                                          { 
                                            if(auxiliar.empty()==true)
                                            {
                                                     auxiliar.push(origen.top());
                                                     origen.pop();
                                            }
                                            else
                                            {
                                                   if(origen.empty()==true)
                                                   {
                                                         origen.push(auxiliar.top());
                                                         auxiliar.pop();
                                                   }
                                                   else
                                                   {
                                                       topa=auxiliar.top();
                                                       topo=origen.top();
                                                       if(topa>topo)
                                                       {
                                                                auxiliar.push(origen.top());
                                                                origen.pop();
                                                       }
                                                       else
                                                       {
                                                                origen.push(auxiliar.top());
                                                                auxiliar.pop();
                                                       }
                                                   }
                                            }
                                         }
								 }    
                                 
 }
                     
                     i++;					 
}
                     cout<<"\n\n";
cout<<"\n\n";

cout<<"En la iteracion No."<<i-1<<"\n\n";
while(origen.empty() != 1)
    {
		cout<<" \t"<<origen.top()<<"\n";
		origen.pop();
    }

cout<<"    --Pilar 1--\n";
cout<<"\n\n";


	
while(auxiliar.empty() != 1)
    {
		cout<<" \t"<<auxiliar.top()<<"\n";
		auxiliar.pop();
    }
cout<<"    --Pilar 2--\n";
cout<<"\n\n";



while(destino.empty() != 1)
    {
		cout<<" \t"<<destino.top()<<"\n";
		destino.pop();
    }
cout<<"    --Pilar 3--\n";
cout<<"\n\n";

cout<<"Presiona ENTER para salir...";
getch();
}

