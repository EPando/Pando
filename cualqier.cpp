#include<iostream>
using namespace std;
int o;

void VecoDina()
{
   int e,p, fi;
   string lim_inf="1", lim_sup;
   //vector dinamico multiple
   cout<<"\t\tIngrese el numero de elementos que contendra su vector\n";
   cin>>fi;
   int Vec[fi];// Le damos las posiciones al vector
   cout<<"  De cuantas cifras sera cada elemento? (con 0 dare cifras al azar)";
   cin>>p;
   if(p==0)//Llenamos vector con elementos de cifras al azar entre 0 y 2.147.483.647.
   {
   srand(time(NULL)); //reinicia la semilla para que no sean igules
   for(e=1;e<=fi;e++)//ciclo para llenar el vector
    {
    Vec[e]=rand();
    }
   }
   else//Llenamos vector con elementos de cifras determinadas
   {
    //creamos los limites superior e inferior
    for(e=0;e<p;e++)
    {
     lim_sup+="9";
    }
    for(e=0;e<(p-1);e++)
    {
    lim_inf+="0";
    }
int ls=atoi(lim_sup.c_str());
int li=atoi(lim_inf.c_str());
srand(time(NULL)); //reinicia la semilla para que no sean iguales
 for(e=1;e<=fi;e++)
 {
  Vec[e]=(rand() % ls) + li;
 }
}
 for(e=1;e<=fi;e++)
 {
  cout<<e<<" .- "<<Vec[e]<<"\n";
 }
}
/*void leeCadena(int cant,int nin[])
{
	int r;
	for(r=0;r<cant;r++)
	{
		cout<<"\n Ingresa numero "<<r+1<<": ";
		cin>>nin[r];
	}	
}*/
// insercion
void insercionDirecta(int Vec[],int n)
{
      int r,f,v;
      for (r = 1; r < n; r++)
        {
             v = Vec[r];
             f = f - 1;
             while (f >= 0 && Vec[f] > v)
             {
                  Vec[f + 1] = Vec[f];
                  f--;
             }
             Vec[f + 1] = v;
      }  
}
//-------------------------------------------
void muestraCadena(int cant,int Vec[])
{
	int r;
	for(r=0;r<cant;r++)
	{
		cout<<"\n                                "<<Vec[r]<<endl;
	}
}
//insercion----------------------------------------------
void mun()
{
      cout<<"\n    ";
      cout<<"\n    U N i V E R S i D A D    P O L i T E C N i C A  De   D U R A N G O. ";    
      cout<<"\n    ";
      cout<<"\n                Programacion de Estructura de Datos.";
      cout<<"\n                      Emmanuel Vazquez Pando.";
      cout<<"\n                   Metodos   de   Ordenamiento.";  
      cout<<"\n\n                               Agenda\n";
      cout<<"\n 1.- Ingresar Informacion. "; 
      cout<<"\n 2.- Metodo Burbuja.   ";
      cout<<"\n 3.- Metodo de insercion.   ";
      cout<<"\n 4.- Metodo de Shell.  ";
      cout<<"\n 5.- Metodo por seleccion.  ";
      cout<<"\n\n          ";
      cin>>o;
 }
int main ()
{
      deaqi:
      system("cls");
      mun();
    switch(o)  
    {
    case 1:
    VecoDina();
        

     
      
    //leeCadena(n,tag);
         goto deaqi;
    
    case 2:
    system("cls");
     
    system ("PAUSE");
         goto deaqi;
         
    case 3:
    system("cls");
    insercionDirecta();
    cout<<"\n\n              Metodo de insercion Finalizado   \n";
    muestraCadena();
    cout<<"\n          ";
    system ("PAUSE");
    goto deaqi;
    
    default:
            break;
    } 
   // 
}

