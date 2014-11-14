#include <conio.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <queue>
using namespace std;
int num,i,j,k,res,temp,a,b,bandera=0;
stack <int> ruta;
queue <int> ruta2;
char opc;
void menu()
{
        system("color A0");
        system("cls");
	            cout<<"                      _____     _         _ _    _____         \n";
                cout<<"                     |  |  |___|_|___ ___| |_|  |     |___ ___ \n";
                cout<<"                     |  |  |   | | . | . | | |  |  |  | . | . |\n";
                cout<<"                     |_____|_|_|_|  _|___|_|_|  |____/|_  |___|\n";
                cout<<"                                 |_|                  |___|    \n";
                cout<<"              ____            _____     _               _   _         \n";
                cout<<"             |    |___ ___   |_   _|___| |___ _____ ___| |_|_|___ ___ \n";
                cout<<"              -  -|   | . |    | | | -_| | -_|     | .'|  _| |  _| .'|\n";
                cout<<"             |____|_|_|_  |    |_| |___|_|___|_|_|_|__,|_| |_|___|__,|\n";
                cout<<"                      |___|                                           \n";
				cout<<"               Alumnos:        Alfredo Ochoa Lopez\n";
				cout<<"                              Emmanuel Vazquez pando\n";
				cout<<"                           Eduardo Emmanuel Diaz Guillen\n\n\n\n";
}
int main()
{
   menu();
   cout<<"\t\tIngrese el numero de nodos ";
   cin>>num;
   int Reco[num+1][num+1];
    int Grafo[num+1][num+1];
     for(i=1;i<=num;i++)
     {
      for(j=i+1;j<=num;j++)
      {
        menu();
        cout<<"\t\tIntroduzca el valor que hay de "<<i<<" a "<<j<<endl;
        cout<<"\t\t";
        cin>>Grafo[i][j];
        Grafo[j][i]=Grafo[i][j];
        if(Grafo[i][j]==0){Grafo[i][j]=999999;Grafo[j][i]=999999;}
      }
     }
     for(i=0;i<=num;i++){Grafo[i][i]=0;Reco[i][i]=0;}//anulamos la diagonal
     for(i=0;i<=num;i++)//Llenamos la martriz de recorrido
     {
      for(j=0;j<=num;j++)
      {
       Reco[j][i]=i;      
      }
      Reco[i][i]=0;
     }
     //aplicamos el algoritmo de floy para calcular la ruta mas corta
     for (k = 1; k <=num; k++)
      for (i = 1; i <= num; i++)
       for (j = 1; j <=num ; j++)
        if ((i != j) && (Grafo[i][k]+Grafo[k][j] < Grafo[i][j]))
        {
         Grafo[i][j]= Grafo[i][k]+Grafo[k][j];
         Reco[i][j]= k;
        } 
        
      //fin del algoritmo
      reset:
      a=0;
      b=0;
      menu();
      cout<<"\t\tVer la ruta mas optima\n";
      cout<<"\t\tDel nodo: ";
      cin>>a;
      cout<<"\t\t al nodo: ";
      cin>>b;
      //imprimimos el recorrido
      if(a==b){cout<<"\t\tNo se pude marcar una ruta si los 2 datos son iguales\n";getch();goto reset;}
       if(a>b){temp=b;b=a;a=temp;bandera++;}
       if((a>num)||(b>num)){cout<<"\t\tNo se pude marcar una ruta fuera de los datos ingresados\n";getch();goto reset;}
       if(bandera==0)
       {
       while(b!=Reco[a][b])
       {
        ruta.push(Reco[0][b]);
        b=Reco[a][b];
       }
       ruta.push(Reco[0][b]);
       ruta.push(a);
       cout<<"\n\n\t\t";
       k=ruta.size();
       i=0;
       while(!ruta.empty())
       {
        if((i+1)==k)
        {
         cout<<ruta.top();
         ruta.pop();          
        }
        else
        {
         cout<<ruta.top();
         cout<<" |---| ";
         ruta.pop();
        }
        i++;
      }
      }
      else
      {
        while(b!=Reco[a][b])
       {
        ruta2.push(Reco[0][b]);
        b=Reco[a][b];
       }
       ruta2.push(Reco[0][b]);
       ruta2.push(a);
       cout<<"\n\n\t\t";
       k=ruta2.size();
       i=0;
       while(!ruta2.empty())
       {
        if((i+1)==k)
        {
         cout<<ruta2.front();
         ruta2.pop();          
        }
        else
        {
         cout<<ruta2.front();
         cout<<" |---| ";
         ruta2.pop();
        }
        i++;
      }
      }
      cout<<"\n\n";
      cout<<"\t\tPresione una tecla para regresar...\n";
      cout<<"\t\to presione x para salir";
      opc=getch();
      if((opc=='x')||(opc=='X')){return(0);}
      else{goto reset;}
}


