#include<conio.h>
#include<iostream>
#include<time.h>
#include<string.h>
#include<queue>
#include <math.h>
using namespace std;
int fi, o, e, de=0, mov=0, f, mo, gol;
clock_t ceros, fin;
string res;
double timin, timbur, timquik,timsel,timshel;
int ban=0;

void insercionDirecta(int Vec[]);
void quikly(int Vec[], int ge, int t);
void shell(int Vec[]);
void seleccion(int Vec[]);
void radix(int Vec[]);
void burbuja(int Vec[]);
int buscarbin(int Vec[], int buscar);
int buscalin(int Vec[], int buscar);
void mun();
int main ()
{ 
      deaqi:
      system("cls");
      
            int p;
   string liminf="1", limis;
   cout<<"\n\n      Ingrese el numero de elementos que contendra su vector  ";
   cin>>fi;
   int Vec[fi];
   cout<<"\n Minimo de cifras para los numeros:   ";
   cin>>p;
    for(e=0;e<p;e++)
    {
     limis+="9";
    }
    for(e=0;e<(p-1);e++)
    {
    liminf+="0";
    }
    int ls=atoi(limis.c_str());
    int li=atoi(liminf.c_str());
    srand(time(NULL)); 
    for(e=1;e<=fi;e++)
    {
    tr:
    mo=(rand() % ls) + li;
    gol=log10(mo)+1;
    if(gol<=p)
    {
    Vec[e]=mo;
    }
    else
    {
       e--;
       goto tr;
    }
    }
 cout<<"\n";
 system("cls");
 cout<<"\n\n\n        Vector Terminado \n\n";
 for(e=1;e<=fi;e++)
 {
  cout<<e<<" .- "<<Vec[e]<<"\n";
 } 
         cout<<"\n   ";
         cout<<"\n   ";
         cout<<"\n   Para continuar escriba SI  ";
         cin>>res;
         system("cls");
         
      if(res=="si"||res=="SI")
      {
       mun();
    if(o==1)
    {
         system("cls"); 
         string ser;  
         insercionDirecta(Vec);
         cout<<"\n\n       Metodo de insercion Finalizado   \n\n";
         cout<<"\n  Con  "<<de<<" comparaciones y  "<<mov<<" Movimientos";
         cout<<"\n\n  Ver el Vector terminado (si/no)   ";
         cin>>ser;
         de=0;
         mov=0;
        
         if(ser=="SI"||ser=="si")
         {
         system("cls");
         cout<<"\n   Vector: \n\n";
         for(e=1;e<=fi;e++)
         {
          cout<<e<<".- "<<Vec[e]<<"\n";
         }
         cout<<"\n\n   ";
         system("PAUSE");
         system("cls");
         goto deaqi;
         }
         else
         {
         system("cls");
         goto deaqi;
         }
    }
    if(o==2)
    {
         system("cls");
         burbuja(Vec);
         string ser;
         cout<<"\n\n       Metodo Burbuja Finalizado   \n\n";
         cout<<"\n  Con  "<<de<<" comparaciones y  "<<mov<<" Movimientos";
         cout<<"\n\n  Ver el Vector terminado (si/no)   ";
         cin>>ser;
         de=0;
         mov=0;
         
         if(ser=="SI"||ser=="si")
         {
         system("cls");
         cout<<"\n   Vector: \n\n";
         for(e=1;e<=fi;e++)
         {
          cout<<e<<".- "<<Vec[e]<<"\n";
         }
         cout<<"\n\n   ";
         system("PAUSE");
         system("cls");
         goto deaqi;
         }
         else
         {
         system("cls");
         goto deaqi;
         }
    }
    if(o==3)
    {
         system("cls");
         seleccion(Vec);
         string ser;
         cout<<"\n\n       Metodo Seleccion Finalizado   \n\n";
         cout<<"\n  Con  "<<de<<" comparaciones y  "<<mov<<" Movimientos";
         cout<<"\n\n  Ver el Vector terminado (si/no)   ";
         cin>>ser;
         de=0;
         mov=0;
      
         if(ser=="SI"||ser=="si")
         {
         system("cls");
         cout<<"\n   Vector: \n\n";
         for(e=1;e<=fi;e++)
         {
          cout<<e<<".- "<<Vec[e]<<"\n";
         }
         cout<<"\n\n   ";
         system("PAUSE");
         
         system("cls");
         goto deaqi;
         }
         else
         {
         system("cls");
         goto deaqi;
         }
    }
         
    if(o==4)
    {
         system("cls");
         shell(Vec);
         string ser;
         cout<<"\n\n       Metodo Shell Finalizado   \n\n";
         cout<<"\n  Con  "<<de<<" comparaciones y  "<<mov<<" Movimientos";
         cout<<"\n\n  Ver el Vector terminado (si/no)   ";
         cin>>ser;
         de=0;
         mov=0;
 
         if(ser=="SI"||ser=="si")
         {
         system("cls");
         cout<<"\n   Vector: \n\n";
         for(e=1;e<=fi;e++)
         {
          cout<<e<<".- "<<Vec[e]<<"\n";
         
         }
         cout<<"\n\n   ";
          system("PAUSE");
         system("cls");
         goto deaqi;
         }
         else
         {
         system("cls");
         goto deaqi;
         }
    }   
    if(o==5)
    {
         system("cls");
         quikly(Vec,0, fi);
         string ser;
         cout<<"\n\n       Metodo Quick Finalizado   \n\n";
         cout<<"\n  Con  "<<de<<" comparaciones y  "<<mov<<" Movimientos";
         timquik = (double)(fin - ceros) / CLOCKS_PER_SEC;
         printf("Elementos Ordenados por el Metodo de Insercion en: %.16g milisegundos \n", timquik*1000);
         cout<<"\n\n  Ver el Vector terminado (si/no)   ";
         cin>>ser;
         de=0;
         mov=0;
         if(ser=="SI"||ser=="si")
         {
         system("cls");
         cout<<"\n   Vector: \n\n";
         for(e=1;e<=fi;e++)
         {
          cout<<e<<".- "<<Vec[e]<<"\n";
          
         }
         cout<<"\n\n   ";
         system("PAUSE");
         system("cls");
         goto deaqi;
         }
         else
         {
         system("cls");
         goto deaqi;
         }
    }
    if(o==6)
    {
         system("cls");
         int buscar;
         cout<<"\n\n       Elemento a buscar     ";
         cin>>buscar;
         buscalin(Vec, buscar);
         buscarbin(Vec,buscar);
         cout<<"\n\n\n   ";
         system("PAUSE");
         system("cls");
         goto deaqi;
    }
    if(o==7)
    {
         system("cls");
         radix(Vec);
         string ser;
         cout<<"\n\n       Metodo Radix Finalizado   \n\n";
         cout<<"\n  Con  "<<de<<" comparaciones y  "<<mov<<" Movimientos";
         cout<<"\n\n  Ver el Vector terminado (si/no)   ";
         cin>>ser;
         de=0;
         mov=0;
         if(ser=="SI"||ser=="si")
         {
         system("cls");
         cout<<"\n   Vector: \n\n";
         for(e=1;e<=fi;e++)
         {
          cout<<e<<".- "<<Vec[e]<<"\n";
          
         }
         cout<<"\n\n   ";
         system("PAUSE");
         system("cls");
         goto deaqi;
         }
         else
         {
         system("cls");
         goto deaqi;
         }
    }
  }
  else
  {
  return 0;
  }
}


void insercionDirecta(int Vec[])
{
      int t=1,d,v; 
     ceros=time(NULL);
     fin=time(NULL);
     ceros=clock(); 
      for (t=1; t<= fi; t++) 
        {
             v = Vec[t];
             d = t - 1;
             while (d >= 0 && Vec[d] > v)
             {
                  Vec[d + 1] = Vec[d];
                  d--;
                  mov=mov+1;  
             }            
             Vec[d+1]=v;
             de=de+1;
        } 
      fin=clock();
      timin = (double)(fin - ceros) / CLOCKS_PER_SEC;
      printf("Elementos Ordenados por el Metodo de Insercion en: %.16g milisegundos \n", timin*1000); 
}

void burbuja(int Vec[])
{
 int t,d,ayu;
 ceros=time(NULL);
     fin=time(NULL);
     ceros=clock(); 
 for(t=1; t<=fi; t++)
      {
		for(d=1; d<=fi-1; d++)
        {
			if(Vec[d] > Vec[d+1])
            {
                ayu=Vec[d];
				Vec[d]=Vec[d+1];
				Vec[d+1]=ayu;
				mov=mov+1;
			}
			de=de+1;
		}
	  }
	  fin=clock();
      timbur = (double)(fin - ceros) / CLOCKS_PER_SEC;
      printf("Elementos Ordenados por el Metodo de Insercion en: %.16g milisegundos \n", timbur*1000);
 }
 
void seleccion(int Vec[])
{
int le=fi-1;
int t,d,abajo, ayu;  
ceros=time(NULL);
     fin=time(NULL);
     ceros=clock(); 
for(t=0; t<= le; t++)
    {
            abajo=t;
            for(d=t+1 ; d<=fi ; d++)
            {
              if(Vec[abajo] > Vec[d])
              {
                abajo=d;
              mov=mov+1;  
              }
              de=de+1;
            }
            ayu=Vec[abajo];
            Vec[abajo]=Vec[t];
            Vec[t]=ayu;
    }
    fin=clock();
      timsel = (double)(fin - ceros) / CLOCKS_PER_SEC;
      printf("Elementos Ordenados por el Metodo de Insercion en: %.16g milisegundos \n", timsel*1000);
}

void shell(int Vec[])
{
int t,d,ayu, help;  
ayu=3;
ceros=time(NULL);
     fin=time(NULL);
     ceros=clock(); 
    while(ayu>0)
    {
          for (t=1;t<=fi;t++)
          {
              d=t;
              help=Vec[t];
              while ((d>=ayu) && (Vec[d-ayu]>help))
              {
                  Vec[d]=Vec[d-ayu];
                  d=d-ayu;
                  mov=mov+1;
              }
              Vec[d]=help;
              de=de+1;
          }
      if (ayu%2 != 0)
      {
       ayu=ayu/2;
      }
      else
      {
       if (ayu==1)
       {
        ayu=0;
       }
        else
         {
          ayu=1;
         }
      }
    }
    fin=clock();
      timshel = (double)(fin - ceros) / CLOCKS_PER_SEC;
      printf("Elementos Ordenados por el Metodo de Insercion en: %.16g milisegundos \n", timshel*1000);
}
 int induce(int v[], int ge, int t)
{
    int qu;
    int piv, vale_piv;
    int temp;
 
    piv = ge;
    vale_piv = v[piv];
    for (qu=ge+1; qu<=t; qu++)
    {
        if (v[qu] < vale_piv)
        {
             piv++;    
             temp=v[qu];
             v[qu]=v[piv];
             v[piv]=temp;
             mov=mov+1;
 
        }
    }
    temp=v[ge];
    v[ge]=v[piv];
    v[piv]=temp;
    return piv;
} 
 
void quikly(int Vec[], int ge, int t)
{
    ceros=time(NULL);
     fin=time(NULL);
     ceros=clock(); 
     int piv;
     if(ge < t)
     {
           de=de+1;
        piv=induce(Vec, ge, t);
        quikly(Vec, ge, piv-1);
        quikly(Vec, piv+1, t);
     }
     fin=clock();
      
}

int buscalin(int Vec[], int buscar)
	{
	    int t;
	    int ban=0;
        for(t=1;t<=fi;t++)
        {
	        if(buscar == Vec[t])
            {
            cout << "\n\n                     Busqueda Lineal  ";
            cout << "\n\n   Se encuentra en la posicion " << t;
	        ban=1;
            }
	   }
	}
	 
int buscarbin(int Vec[], int buscar)
	{
	    int inicio, fin;
	    int medio;
	    int ban=0;
	    inicio = 1;
	    fin = fi;
	 
	    while(inicio <= fin)
        {
	      medio = (inicio + fin) / 2;
	      if(buscar == Vec[medio])
          {
            ban=1;
            cout << "\n\n                     Busqueda Binaria  ";
            cout << "\n\n   Se encuentra en la posicion " << medio;
	        return Vec[medio];
          }
          else
          {
	          if(Vec[medio] > buscar)
              {
              fin = medio - 1;
	          } 
              else
              {
	            inicio = medio + 1;
	          }
	      }
	    }
	     if(ban==0)
         {
         cout<<"\n\n\n     El elemento no existe! \n";          
         }
	}
void radix(int Vec[])
{
	int front[10], rear[10];

	struct {
		int info;
		int next;
	} node[fi];
	
	int exp, first, i, j, k, p, q, y;
 

	for (i = 0; i < fi-1; i++)
	{
		node[i].info = Vec[i];
		node[i].next = i+1;
	} /* fin del for */
	
	node[fi-1].info = Vec[fi-1];
	node[fi-1].next = -1;
	first = 0; 
	
	for (k = 1; k < 10; k++) 
	{

		for (i = 0; i < 10; i++)
		{
	
			rear[i] = -1;
			front[i] = -1;
		}
		while (first != -1)
		{
			p = first;
			first = node[first].next;
			y = node[p].info;
			exp = pow(10, k-1);	
			j = (y/exp) % 10;
			q = rear[j];
			if (q == -1)
				front[j] = p;
			else
				node[q].next = p;
			rear[j] = p;
      }
		for (j = 0; j < 10 && front[j] == -1; j++);
			;
		first = front[j];
	 
	  
		while (j <= 9)
		{ 	
			for (i = j+1; i < 10 && front[i] == -1; i++);
				;
			if (i <= 9)
			{
				p = i;
				node[rear[j]].next = front[i];
			} 
			j = i;
		}
		node[rear[p]].next = -1;
	}
	for (i = 0; i < fi; i++) 
	{
    		Vec[i] = node[first].info;
    		first = node[first].next;
	} 
 

}


void mun()
{
      system("color 84");
      cout<<"\n    ";
      cout<<"\n    U N i V E R S i D A D    P O L i T E C N i C A  De   D U R A N G O. ";    
      cout<<"\n    ";
      cout<<"\n                     Programacion de Estructura de Datos.";
      cout<<"\n                           Emmanuel Vazquez Pando.";
      cout<<"\n                         Metodos   de   Ordenamiento.";  
      cout<<"\n\n                             ";
      cout<<"\n 1.- Metodo de insercion.   ";
      cout<<"\n 2.- Metodo Burbuja.   ";
      cout<<"\n 3.- Metodo por seleccion.  ";
      cout<<"\n 4.- Metodo de Shell.  ";
      cout<<"\n 5.- Metodo Quick.  ";
      cout<<"\n 6.- Metodo de busqueda.  ";
      cout<<"\n 7.- Salir (: .  ";
      cout<<"\n\n          ";
      cin>>o;
 }

