#include<conio.h>
#include<iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;
int main ()
{
    int n, elementos, elem=0, i=19, j=31, menu, a , b, z=0, zz=0, zzz=0;
    float y;
    string resp;
    cout<<"\n\n\n";
    cout<<"\tUNIVERSIDAD POLITECNICA DE DURANGO\n";
    cout<<"\tProgramacion y estructura de datos\n";
    cout<<"\tFacilitador: MTI Roobed Trejo Mier\n";
    cout<<"\tAlumnos: Omar Andres Medina Avalos\n\tOscar Manuel Contreras Cabrera\n";
    cout<<"\n\n\tResolucion de operaciones con conjuntos MD\n";
    cout<<"\n\tPresiona enter para continuar...";
    getch();
    int conjuntos[i][j], vector[z], un[zz], uni[zz], comp[zz];
    system ("cls");
    
    cout<<"Dime cuantos conjuntos vas a utilizar\n";
    cin>>n;
    
    for(j=0; j<n; j++)
    {
        cout<<"\nCuantos elementos tendra tu "<<j+1<<" conjunto?";
        cin>>conjuntos[0][j];
        for(i=1;i<=conjuntos[0][j];i++)
           {
            cout<<"Dame el "<<i<<" valor del conjunto "<<j+1<<": ";
            cin>>conjuntos[i][j];
           }
            
    }
    //Mostrar los valores de los conjuntos
    for(j=0;j<n;j++)
    {
                    for(i=1;i<=conjuntos[0][j];i++)
                    {
                    cout<<conjuntos[i][j]<<" ";
                    }
    }
    //hasta aqui muestra los valores
    
    cout<<"\n\n1.-Interseccion\n2.-Union\n3.-Complemento\n4.-Diferencia\n5.-Diferencia Simetrica\n6.-Salir\n";
    cout<<"Pulsa la operacion que deseas realizar:\n";
    cin>>menu;
        if (menu==1)
        {
                cout<<"Que conjunto vas a intersectar? ";
                cin>>a;
                cout<<"Con cual otro conjunto se hara la interseccion? ";
                cin>>b;
                for(i=1;i<=conjuntos[0][a-1];i++)
                {
                                  for(j=1;j<=conjuntos[0][b-1];j++)
                                  {         
                                      if(conjuntos[i][a-1]==conjuntos[j][b-1])
                                      {
                                      vector[z]=conjuntos[j][b-1];
                                      cout<<conjuntos[j][b-1]<<" - ";      
                                      z=z+1;
                                                 
                                      }
                                      
                                  }
                }
    //            cout<<"Vas a realizar alguna operación con el conjunto resultante?";
      //          cin>>resp;
        //        if(resp=="si")
          //      {goto operaciones;
            //            }
                
    }
    if(menu==2)
    { 
                cout<<"Que conjunto vas a unir? ";
                cin>>a;
                cout<<"Con cual otro conjunto se hara la union? ";
                cin>>b;
               for(i=1;i<=conjuntos[0][a-1];i++)
                {
                                                un[zz]=conjuntos[i][a-1];
                                                cout<<un[zz]<<" - "; 
                                                zz=zz+1;
                }
                zzz=zz;
                for(j=1;j<=conjuntos[0][b-1];j++)
                {
                                         un[zz]=conjuntos[j][b-1];
                                         cout<<un[zz]<<" - ";
                                         zz=zz+1;
                                     
                }
                           
                                 
    //cerrar if menu==2           
    }                      
    if(menu==3)
    {
    cout<<"\nDe cual conjunto deseas saber su complemento? ";
    cin>>a;
     for(j=0;j<n;j++)
    {
                     if(j!=(a-1))
                     {
                            for(i=1;i<=conjuntos[0][j];i++)
                            {
                            vector[z]=conjuntos[i][j];                               
                        //    cout<<vector[z]<<" ";
                            z=z+1;
                            }
                    }
    }
    
     for(j=1;j<=conjuntos[0][a-1];j++)
              {
                                      while(z>(0))
                                      {             z=z-1;
                                                 if(vector[z]!=conjuntos[j][a-1])
                                                 {comp[zz]=vector[z];
                                                 cout<<"\n"<<comp[zz];
                                                 zz=zz+1;
                                                 }
                                                 
                                      }
                                      
                }
    
     //cerrar menu=3           
    }
    
    if(menu==4)
    {
                cout<<"Menciona el conjunto al que se le restará algo? ";
                cin>>a;
                cout<<"Que conjunto le restarás al anterior? ";
                cin>>b;
                for(i=1;i<=conjuntos[0][a-1];i++)
                {
                                  for(j=1;j<=conjuntos[0][b-1];j++)
                                  {         
                                      if(conjuntos[i][a-1]!=conjuntos[j][b-1])
                                      {
                                      vector[z]=conjuntos[j][b-1];
                                      cout<<conjuntos[j][b-1]<<" - ";      
                                      z=z+1;
                                                 
                                      }
                                      
                                  }
                }
               
               
               
    //cerrar menu=4           
    }
    
getch();
}
