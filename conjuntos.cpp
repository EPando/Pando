#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
//matriz
int venn[19][30],op;
//banderas, auxilares
int ex, nada;
//operaciones
int uni[100],com[100], dif[100], inter[100], todo[100],difo[100],difos[100];
//contadores
int h=1,p=1, y=1, q=1, s=1, g=1,el,me,em;
//variables de conjuntos
int ro, ri;
//nombre de los conjuntos
string let[100];
//encabezado
void enca ()
{
     system("color 5");
cout<<"\n                 Universidad Politecnica de Durango.";
cout<<"\n     ";
cout<<"\n                         Estructura de Datos.";
cout<<"\n                        Emmanuel Vazquez Pando.";
cout<<"\n                  Programa sobre Teoria de Conjuntos.";
}
int main()
{
enca();        
cout<<"\n";
cout<<"\n Cuantos conjuntos son: ";
cin>>venn[0][0];
cout<<"\n";
for(h=1;h<=venn[0][0]; h++)
  {
  cout<<"\n";
  cout<<"\n Como se llama tu conjunto? ";
  cin>>let[h];
  cout<<"\n Cuantos elementos tiene el conjunto "<<"'"<<let[h]<<"'"<<" ";
  cin>>venn[h][0];
   for(p=1;p<=venn[h][0]; p++)
   {
   cout<<"\n";
   cout<<"\n Elemento: ";
   cin>>venn[h][p];
   }
   system("cls");
   enca();
  }
for(q=1;q<=venn[0][0];q++)
 {
  
  cout<<"\n";
  cout<<"\n El conjunto "<<"'"<<let[q]<<"'"<<" tiene estos elementos: ";
  for(s=1; s<=venn[q][0]; s++)
  {
   cout<<" "<<venn[q][s]<<"| ";
  }
 }
cout<<"\n";
cout<<"\n";
me=0;
for(y=1;y<=venn[0][0];y++)
  {
    for(q=1;q<=venn[y][0];q++)
    {
      for(g=1;g<=100;g++)
      {

        if(venn[y][q]==uni[g])
        {
        ex=1;
        }
      }
     if(ex==0)
     {
     me=me+1;
     uni[me]=venn[y][q];    
     }
     ex=0;
    }
  } 
system("PAUSE");
cout<<"\n";
cout<<"\n Que deseas hacer? ";
cout<<"\n";
cout<<"\n 0.- Ver Universo.";
cout<<"\n 1.- Interseccion.";
cout<<"\n 2.- Union.";
cout<<"\n 3.- Complemento.";
cout<<"\n 4.- Diferencia";
cout<<"\n 5.- Diferencia Simetrica";
cout<<"\n 6.- Ver conjuntos.";
cout<<"\n";
cout<<"\n   ";
cin>>op;
system("cls");
while (op<7)
{
if(op==0)
{
enca();

cout<<"\n   ";
cout<<"\n   ";
cout<<"\n   Tu universo es: ";
  for(h=1;h<=me;h++)
  {
  if(uni[h]==0)
  {
  nada=nada-1;
  }
  else
  {
  cout<<"\n   "<<h<<".- "<<uni[h];
  }
  }
cout<<"\n   ";
cout<<"\n   ";
system("PAUSE");
system("cls");
}         
if(op==1)
{
    enca();
    el=0;
    cout<<"\n Bien dime que conjunto vas a intersectar: ";
    for(g=1;g<=venn[0][0];g++)
    {
     cout<<"\n";
     cout<<"----"<<g<<".-"<<let[g];
    }
      cout<<"\n";
      cout<<"\n : ";
      cin>>ri;
      cout<<"\n y: ";
      cin>>ro;
      cout<<"------------------------";
      cout<<"\n";
       cout<<"\n Datos Intersectados: ";
     for(q=1;q<=venn[ri][0];q++)
     {
      for(s=1;s<=venn[ro][0];s++)
      {
        if(venn[ri][q]== venn[ro][s])
        {
                         
         inter[s]=venn[ri][q];
         cout<<" || "<<inter[s];
         el=el+1;
        }               
      }
     }
     cout<<"\n";
    cout<<"\n";
    cout<<"\n";
system("PAUSE");
system("cls");
}

if(op==2)
{
    enca();
    el=0;
    cout<<"\n Que conjuntos se van a unir: ";
     for(g=1;g<=venn[0][0];g++)
    {
     cout<<"\n";
     cout<<g<<" .-"<<let[g];
    }
   cout<<"\n";
   cout<<"\n : ";
   cin>>ri;
   cout<<"\n y: ";
   cin>>ro;
   cout<<"\n";
   for(q=1;q<=venn[ri][0];q++)
   {
   todo[q]=venn[ri][q];
   el=el+1;
   cout<<"\n || "<<todo[q];
   }
   for(p=1;p<=venn[ro][0];p++)
   {
    for(h=1;h<=el;h++)
    {
     if(venn[ro][p]==todo[h])
     {
     ex=1;
     }
    }
    if(ex==0)
    {
    cout<<"\n";
    cout<<"  || "<<venn[ro][p];
    }
    ex=0;
   }
   cout<<"\n";
   cout<<"\n";
system("PAUSE");
system("cls");      
}
if(op==3)
{
   enca();
   el=0;
   cout<<"\n";
   cout<<"\n Que conjunto vas a complementar? ";
   cout<<"\n";
   for(g=1;g<=venn[0][0];g++)
    {
     cout<<"\n";
     cout<<"----"<<g<<".-"<<let[g];
    }
      cout<<"\n";
      cout<<"\n : ";
      cin>>ri;
      cout<<"\n";
    for(h=1;h<=me;h++)
    {
      for(q=1;q<=venn[ri][0];q++)
      {                          
       if(uni[h]==venn[ri][q])
       {
       ex=1;
       }
      }
      if(ex==0)
      {
      el=el+1;
      com[el]=uni[h];
      }
      ex=0;
    }         
    cout<<"\n El complemento es: ";
    for(g=1;g<=el;g++)
    {
     if(com[g]==0)
     {
     nada=nada+1;
     }
     else
     { 
     cout<<" || "<<com[g];
     }
    }  
   cout<<"\n";
   cout<<"\n";
   system("PAUSE");
   system("cls");   
}
if(op==4)
{
    enca();
    el=0;
    me=0;
    cout<<"\n\n Bien dime que conjuntos vas sacar Diferencia: ";
    for(g=1;g<=venn[0][0];g++)
    {
     cout<<"\n";
     cout<<"----"<<g<<".-"<<let[g];
    }
      cout<<"\n";
      cout<<"\n : ";
      cin>>ri;
      cout<<"\n menos: ";
      cin>>ro;
      cout<<"------------------------";
      cout<<"\n"; 
      cout<<"\n "; 
      for(q=1;q<=venn[ri][0];q++)
     {
      for(s=1;s<=venn[ro][0];s++)
      {
        if(venn[ri][q]== venn[ro][s])
        {               
         inter[s]=venn[ri][q];
         el=el+1;
        }               
      }
     }
     cout<<"   "<<let[ri]<<" - "<<let[ro]<<" es: ";
     for(h=1;h<=venn[ri][0];h++)
     {
       for(p=1; p<=el;p++)
       {
         if(venn[ri][h]==inter[p])
         {
          ex=1;
         }
       }
     if(ex==0)
     {
     me=me+1;
     dif[me]=venn[ri][h];
     }
     ex=0;
     }
    for(y=1;y<=me;y++)
    {
     if(dif[y]==0)
     {
     nada=nada+1; 
     }
     else
     {
     cout<<" || "<<dif[y];
     }    
    }
cout<<"\n";
cout<<"\n";
cout<<"\n";
system("PAUSE");
system("cls");
}
if(op==5)
{
    enca();
    el=0;
    me=0;
    cout<<"\n Bien dime que conjunto vas sacar Diferencia Simetrica: ";
    for(g=1;g<=venn[0][0];g++)
    {
     cout<<"\n";
     cout<<"----"<<g<<".-"<<let[g];
    }
      cout<<"\n";
      cout<<"\n : ";
      cin>>ri;
      cout<<"\n y: ";
      cin>>ro;
      cout<<"------------------------";
      cout<<"\n";
      for(q=1;q<=venn[ri][0];q++)
      {
       for(s=1;s<=venn[ro][0];s++)
       {
         if(venn[ri][q]== venn[ro][s])
         {                         
          inter[s]=venn[ri][q];
          el=el+1;
         }               
       }
      }
     cout<<"\n Diferencia Simetrica: ";
      for(h=1;h<=venn[ri][0];h++)
     {
       for(p=1; p<=el;p++)
       {
         if(venn[ri][h]==inter[p])
         {
          ex=1;
         }
       }
     if(ex==0)
     {
     me=me+1;
     difo[me]=venn[ri][h];
     }
     ex=0;
     }
     
    cout<<"\n\n  "<<let[ri]<<": ";
    for(s=1;s<=me;s++)
    {
     if(difo[s]==0)
     {
     nada=nada+1;
     }
     else
     {
     cout<<"  || "<<difo[s];
     }
    }
    me=0;
     for(g=1;g<=venn[ro][0];g++)
     {
       for(y=1; y<=el;y++)
       {
         if(venn[ro][g]==inter[y])
         {
          ex=1;
         }
       }
     if(ex==0)
     {
     me=me+1;
     difos[me]=venn[ro][g];
     }
     ex=0;
     }
    cout<<"\n\n  "<<let[ro]<<": ";
    for(s=1;s<=me;s++)
    {
    if(difos[s]==0)
    {
     nada=nada+1;
    }
    else
    {
    cout<<"  || "<<difos[s]; 
    }
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
system("PAUSE");
system("cls");
}
if(op==6)
{
enca();
for(q=1;q<=venn[0][0];q++)
 {
  cout<<"\n";
  cout<<"\n El conjunto "<<"'"<<let[q]<<"'"<<" tiene estos elementos: ";
  for(s=1; s<=venn[q][0]; s++)
  {
   cout<<" "<<venn[q][s]<<"| ";
  }
 }
 cout<<"\n";
 cout<<"\n";
 system("PAUSE");
 system("cls");
}
enca();
cout<<"\n";
cout<<"\n Que deseas hacer? ";
cout<<"\n 0.- Ver universo.";
cout<<"\n 1.- Interseccion.";
cout<<"\n 2.- Union.";
cout<<"\n 3.- Complemento.";
cout<<"\n 4.- Diferencia.";
cout<<"\n 5.- Diferencia Simetrica.";
cout<<"\n 6.- Ver conjuntos.";
cout<<"\n Salir. (s)";
cout<<"\n";
cout<<"\n   ";
cin>>op;
system("cls");

}
getch();
}
