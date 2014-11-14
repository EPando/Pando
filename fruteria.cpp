#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
string prd[100], pro[100];
string res, opp, ft[100], in, see;
int op, r, u,to=0, enc=0;
float req[100][2];
int du=0, pr, nc=0;
int main ()
{
    system("color 3");
    cout<<"\n\t *** Universidad Politecnica de Durango ***";
    cout<<"\n\t * Emmanuel Vazquez Pando *";
    cout<<"\n\t ** Programacion estructurada **\n";
    cout<<"\n";
    cout<<" <Sistema de Inventariado, Requisiciones y de cobro de una FRUTERIA> \n";
    cout<<"\n";
    cout<<" Hola bienvenido al sistema \n";
    cout<<"\n";
    cout<<" Ingresaras datos? (si/no) ";
    cin>>opp;
    while (opp=="si")
    {
    cout<<"\n";
    cout<<" Que te gustaria hacer? \n";
    cout<<"\n";
    cout<<" 1.- Inventariar.\n";
    cout<<" 2.- Hacer encargos.\n";
    cout<<" 3.- Cobrar. \n";
    cout<<"\n";  
    cout<<" ";
    cin>> op;
    if (op==1)
    {
              
      cout<<"\n";
      cout<<"Bien, para poder inventariar debes decime cuanta cantidad de kilos tiene cada fruta.\n";
      cout<<"\n";
      cout<<"Siempre hemos tenido 5 tipos diferentes de frutas. Agregaras mas? (si/no)";
      cin>>res;         
      cout<<"\n";
         if(res=="si")
          {
           int cap=0, f=0, r=0;
           cout<<"Dime el total de frutas que tendras: ";
           cin>>cap;
           cap=cap-1;
             int fru[cap][2];
             for (f=0; f<=cap; f++)
              {
               cout<<"\n";
               cout<<" Nombre de la fruta: ";
               cin>> ft[r];
               cout<<"\n";
               cout<<f+1<<".- Kilos en existencia: ";
               cin>> fru[f][0];
               cout<<"\n";
               fru[f][1]=30;
               r= r+1;
               }
           cout<<"Quieres ver el inventario? \n";
           cin>>in;
           if (in=="si")
            {
             int f=0;
             for(r=0;r<=cap; r++)
              {         
                if(fru[f][0]>=30)
                 {
                  cout<<"\n";                    
                  cout<<"Fruta: "<<ft[r]<<" Kilos en Existencia: "<<fru[f][0]<<" kilos base: "<<fru[f][1]<<" Pedir mas frutas: no";
                  cout<<"\n";
                  }
                 else
                  {
                   cout<<"\n";                    
                   cout<<"Fruta: "<<ft[r]<<" Kilos en Existencia: "<<fru[f][0]<<" kilos base: 30"<<" Pedir mas frutas: si";
                   cout<<"\n";
                   }
              f=f+1;
              }                  
             } 
          }       
      else
      {
        int cap=4, r=0, f=0;
        int fru[cap][2];
          cout<<"Bien si no hay nuevas frutas entonces dame los datos de las frutas de siempre. \n";
          for(f=0;f<=cap; f++)
          {
           cout<<"\n";
           cout<<" Nombre de la fruta: ";
           cin>> ft[r];
           cout<<"\n";
           cout<<f+1<<".- Kilos en existencia: ";
           cin>> fru[f][0];
           fru[f][1]=30;
           cout<<"\n";                         
           r=r+1;   
          }
          
        cout<<"Quieres ver el inventario? \n";
        cin>>in;
        if (in=="si")
         {
           int f=0;
           for(r=0;r<=cap; r++)
           {           
            if(fru[f][0]>=30)
            {
            cout<<"\n";                    
            cout<<"Fruta: "<<ft[r]<<" Kilos en Existencia: "<<fru[f][0]<<" kilos base: "<<fru[f][1]<<" Pedir mas frutas: no";
            cout<<"\n";
            }
            else
            {
            cout<<"\n";                    
            cout<<"Fruta: "<<ft[r]<<" Kilos en Existencia: "<<fru[f][0]<<" kilos base: 30"<<" Pedir mas frutas: si";
            cout<<"\n";
            }
          f=f+1;
          } 
         }              
       }
     }
 if(op==2)
{
 cout<<"\n";
 cout<<" A continuacion se te mostraran los proveedores y sus precios. \n";
 cout<<" Los precios se te mostraran a precio por Kilogramo. \n";
 cout<<" Para continuar escribe 'Ok'  \n"; 
 cout<<"\n";
 cout<<" ";
 cin>>see;
 while (see=="Ok")
 {
 
          cout<<"\n";
          //sandia
          cout<<" 1.-Huerto San Juanchito \n";
          cout<<"  Fresa: $10 \n";
          cout<<"  Naranja: $5 \n";
          cout<<"  Sandia: $0.45 \n";
          cout<<"  Manzana: $23.45 \n";
          cout<<"  Guayaba: $8.29 \n";
          cout<<"\n";
          //fresa
          cout<<" 2.-Hacienda Don Tosoco \n";
          cout<<"  Fresa: $5.76 \n";
          cout<<"  Naranja: $9 \n";
          cout<<"  Sandia: $1.12 \n";
          cout<<"  Manzana: $9.67 \n";
          cout<<"  Guayaba: $7.31 \n";
          cout<<"\n";
          //naranja
          cout<<" 3.-Jardines Donha Yuyiz \n";
          cout<<"  Fresa: $11.76 \n";
          cout<<"  Naranja: $2.37 \n";
          cout<<"  Sandia: $2.25 \n";
          cout<<"  Manzana: $14.51 \n";
          cout<<"  Guayaba: $21.09 \n";
          cout<<"\n";
          //guayaba
          cout<<" 4.-El ranchito \n";
          cout<<"  Fresa: $8.53 \n";
          cout<<"  Naranja: $12.22 \n";
          cout<<"  Sandia: $7.25 \n";
          cout<<"  Manzana: $7.57 \n";
          cout<<"  Guayaba: $4.49 \n";
          cout<<"\n";
          //manzana
          cout<<" 5.-Gabino's Ranch \n";
          cout<<"  Fresa: $18.26 \n";
          cout<<"  Naranja: $26.11 \n";
          cout<<"  Sandia: $4.01 \n";
          cout<<"  Manzana: $2.78 \n";
          cout<<"  Guayaba: $41.21 \n";
          cout<<"\n";
          cout<<" Cuantos encargos seran? ";
          cin>>enc;
          enc=enc-1;
          int to=0, nc=0, du=0;
          for(nc=0; nc<=enc; nc++)
          {
          cout<<"\n";          
          cout<<" Elige un proveedor \n";
          cout<<"  1.-Huerto San Juanchito \n";
          cout<<"  2.-Hacienda Don Tosoco \n";
          cout<<"  3.-Jardines Donha Yuyiz \n";
          cout<<"  4.-El ranchito \n";
          cout<<"  5.-Gabino's Ranch \n";
          cout<<"   ";
          cin>>pr;
          if (pr==1)
               {
                    cout<<"\n";
                     cout<<"\n";
                     pro[to]="Huerto San Juanchito";
                     cout<<" Elegiste el Huerto San Juanchito\n";
                     cout<<"\n";        
                     cout<<" Que producto vas a pedir? \n";
                     cout<<"\n";
                     cout<<"  Fresa \n";
                     cout<<"  Naranja \n";
                     cout<<"  Sandia \n";
                     cout<<"  Manzana \n";
                     cout<<"  Guayaba \n";
                     cout<<"\n";
                     cout<<" ";
                     cin>>prd[du];
                     if (prd[du]== "fresa")
                         {
                          cout<<"\n";         
                          cout<<"Cuantos kilos pediras? ";
                          cin>>req[nc][0];
                          req[nc][1]=req[nc][0]*10;
                          cout<<"\n";      
                          }
                     else
                         {
                         if(prd[du]=="naranja")
                            {
                             cout<<"\n";
                             cout<<"Cuantos kilos pediras? ";
                             cin>>req[nc][0];
                             req[nc][1]=req[nc][0]*5;
                             cout<<"\n"; 
                             }            
                          else
                              {
                               if(prd[du]=="sandia")
                               {
                                                    cout<<"\n";
                                cout<<"Cuantos kilos pediras? ";
                                cin>>req[nc][0];
                                req[nc][1]=req[nc][0]*0.45;
                                cout<<"\n"; 
                               }
                               else
                                  {
                                  if (prd[du]=="manzana")
                                     {
                                                         cout<<"\n";
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]*23.45;
                                       cout<<"\n"; 
                                      }
                                   else
                                      {
                                                   cout<<"\n";
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]*8.29;
                                       cout<<"\n";
                                       }   
                                   }
                               }   
                             }
                          }     
                             
        if(pr==2)
           {
                     cout<<"\n";
                     pro[to]="Hacienda Don Tosoco";
                     cout<<"Elegiste La hacienda Don Tosoco \n";
                     cout<<"\n";        
                     cout<<"Que producto vas a pedir? \n";
                     cout<<"\n";
                     cout<<"  Fresa \n";
                     cout<<"  Naranja \n";
                     cout<<"  Sandia \n";
                     cout<<"  Manzana \n";
                     cout<<"  Guayaba \n";
                     cin>>prd[du];
                     if (prd[du]== "fresa")
                         {
                                   cout<<"\n";
                          cout<<"Cuantos kilos pediras? ";
                          cin>>req[nc][0];
                          req[nc][1]=req[nc][0]*5.76;
                          cout<<"\n";      
                          }
                     else
                         {
                          
                         if(prd[du]=="naranja")
                            {
                                               cout<<"\n";
                             cout<<"Cuantos kilos pediras? ";
                             cin>>req[nc][0];
                             req[nc][1]=req[nc][0]*9;
                             cout<<"\n"; 
                             }            
                          else
                              {
                               if(prd[du]=="sandia")
                               {
                                                    cout<<"\n";
                                cout<<"Cuantos kilos pediras? ";
                                cin>>req[nc][0];
                                req[nc][1]=req[nc][0]*1.12;
                                cout<<"\n"; 
                               }
                               else
                                  {
                                  if (prd[du]=="manzana")
                                     {
                                                         cout<<"\n";
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]*9.67;
                                       cout<<"\n"; 
                                      }
                                   else
                                      {
                                                   cout<<"\n";
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]*7.31;
                                       cout<<"\n";
                                       }   
                                   }
                               }   
                             }
                          }   
                 
            if(pr==3)
            {
                     cout<<"\n";
                     pro[to]="Jardines de Donha Yuyiz";
                     cout<<"Elegiste Jardines de Donha Yuyiz \n";
                     cout<<"\n";        
                     cout<<"Que producto vas a pedir? \n";
                     cout<<"\n";
                     cout<<"  Fresa \n";
                     cout<<"  Naranja \n";
                     cout<<"  Sandia \n";
                     cout<<"  Manzana \n";
                     cout<<"  Guayaba \n";
                     cin>>prd[du];
                     if (prd[du]== "fresa")
                         {
                                   cout<<"\n";
                          cout<<"Cuantos kilos pediras? ";
                          cin>>req[nc][0];
                          req[nc][1]=req[nc][0]*11.76;
                          cout<<"\n";      
                          }
                     else
                         {
                         
                         if(prd[du]=="naranja")
                            {
                                               cout<<"\n";
                             cout<<"Cuantos kilos pediras? ";
                             cin>>req[nc][0];
                             req[nc][1]=req[nc][0]*2.37;
                             cout<<"\n"; 
                             }            
                          else
                              {
                               if(prd[du]=="sandia")
                               {
                                                    cout<<"\n";
                                cout<<"Cuantos kilos pediras? ";
                                cin>>req[nc][0];
                                req[nc][1]=req[nc][0]*2.25;
                                cout<<"\n"; 
                               }
                               else
                                  {
                                  if (prd[du]=="manzana")
                                     {
                                                         cout<<"\n";
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]*14.51;
                                       cout<<"\n"; 
                                      }
                                   else
                                      {
                                                   cout<<"\n";
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]* 21.09;
                                       cout<<"\n";
                                       }   
                                   }
                               }   
                             }
                         }      
if(pr==4)
         {
                     cout<<"\n";
                     pro[to]="Gabino's Ranch";
                     cout<<"Elegiste Gabino's Ranch \n";
                     cout<<"\n";        
                     cout<<"Que producto vas a pedir? \n";
                     cout<<"\n";
                     cout<<"  Fresa \n";
                     cout<<"  Naranja \n";
                     cout<<"  Sandia \n";
                     cout<<"  Manzana \n";
                     cout<<"  Guayaba \n";
                     cin>>prd[du];
                     if (prd[du]== "fresa")
                         {
                                   cout<<"\n";
                          cout<<"Cuantos kilos pediras? ";
                          cin>>req[nc][0];
                          req[nc][1]=req[nc][0]* 8.53;
                          cout<<"\n";      
                          }
                     else
                         {
                         if(prd[du]=="naranja")
                            {
                                               cout<<"\n";
                             cout<<"Cuantos kilos pediras? ";
                             cin>>req[nc][0];
                             req[nc][1]=req[nc][0]*12.22;
                             cout<<"\n"; 
                             }            
                          else
                              {
                               if(prd[du]=="sandia")
                               {
                                                    cout<<"\n";
                                cout<<"Cuantos kilos pediras? ";
                                cin>>req[nc][0];
                                req[nc][1]=req[nc][0]*7.25;
                                cout<<"\n"; 
                               }
                               else
                                  {
                                  if (prd[du]=="manzana")
                                     {
                                                         cout<<"\n";
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]*7.57;
                                       cout<<"\n"; 
                                      }
                                   else
                                      {
                                                   cout<<"\n";
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]*4.49;
                                       cout<<"\n";
                                       }   
                                   }
                               }   
                             }
}
if(pr==5)
         {
                     cout<<"\n";
                     pro[to]="El ranchito";
                     cout<<"Elegiste El ranchito\n";
                     cout<<"\n";        
                     cout<<"Que producto vas a pedir? \n";
                     cout<<"\n";
                     cout<<"  Fresa \n";
                     cout<<"  Naranja \n";
                     cout<<"  Sandia \n";
                     cout<<"  Manzana \n";
                     cout<<"  Guayaba \n";
                     cin>>prd[du];
                     if (prd[du]== "fresa")
                         {
                                   cout<<"\n";
                          cout<<"Cuantos kilos pediras? ";
                          cin>>req[nc][0];
                          req[nc][1]=req[nc][0]* 18.26;
                          cout<<"\n";
                          cout<<"\n";
                                       cout<<"   ";      
                          }
                     else
                         {
                         if(prd[du]=="naranja")
                            {
                                               cout<<"\n";
                             cout<<"Cuantos kilos pediras? ";
                             cin>>req[nc][0];
                             req[nc][1]=req[nc][0]*26.11;
                             cout<<"\n";
                             cout<<"\n";
                                       cout<<"   "; 
                             }            
                          else
                              {
                               if(prd[du]=="sandia")
                               {
                                                    cout<<"\n";
                                cout<<"Cuantos kilos pediras? ";
                                cin>>req[nc][0];
                                req[nc][1]=req[nc][0]*4.01;
                                cout<<"\n"; 
                                cout<<"\n";
                                       cout<<"   ";
                               }
                               else
                                  {
                                  if (prd[du]=="manzana")
                                     {
                                                         cout<<"\n";
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]*2.78;
                                       cout<<"\n"; 
                                      cout<<"\n";
                                       cout<<"   ";
                                      }
                                   else
                                      {
                                          cout<<"\n";         
                                       cout<<"Cuantos kilos pediras? ";
                                       cin>>req[nc][0];
                                       req[nc][1]=req[nc][0]*41.21;
                                       cout<<"\n";
                                       cout<<"\n";
                                       cout<<"   ";
                                       }   
                                   }
                               }   
                             }
                         }
to=to+1;
du=du+1;
}
        cout<<"\n";
        cout<<" Aqui esta tu encargo: \n";
        int ui=0, oy=0;
        for(nc=0;nc<=enc;nc++)
        {
        cout<<"Proveedor: "<<pro[oy]<<" Producto: "<<prd[ui]<<" Kilogramos Pedidos: "<<req[nc][0]<<"kg"<<" Total del Encargo: $"<<req[nc][1]; 
        cout<<"\n";
        cout<<"\n";
        req[1][2]=req[nc][1]+req[1][2];
        oy=oy+1;
        ui= ui+1;    
        }
       
   cout<<"Total de toda la Requisicion: $"<<req[1][2];
   cout<<"\n"; 
   cout<<"\n";                     
   cout<<" Haras mas encargos? (Ok/no) "; 
   cin>>see;
   cout<<"\n";           
   }         
}

if(op==3)
{
         float iva, total, pres[10000][2];
         int d, an, e=0, aq=0;
         string cli, cajero, mes, cob, fruta[10000];
         cout<<"\n";
         cout<<" Hola para empezar a cobrar dime el nombre del cliente: ";
         cin>>cli;
         cout<<"\n";
         cout<<" Ahora dime tu nombre: ";
         cin>>cajero;
         cout<<"\n";
         cout<<" La fecha \n";
         cout<<"\n";
         cout<<" Dia: ";
         cin>>d;
         cout<<"\n";
         cout<<" Mes: ";
         cin>>mes;
         cout<<"\n";
         cout<<" Anho: 20";
         cin>>an;
         cout<<"\n";
         cout<<" Empezar a cobrar... (si/salir) ";
         cin>>cob;
         while(cob=="si")
         {
           cout<<"\n";
           cout<<" Produto: ";
           cin>>fruta[aq];
           cout<<"\n";
           cout<<" Cantidad en Kg: ";
           cin>>pres[aq][0];
           cout<<"\n";
           cout<<" Precio por kilo: $";
           cin>>pres[aq][1];
           cout<<"\n";
           pres[aq][2]=pres[aq][0]*pres[aq][1];
           total= pres[aq][2]+total;
           cout<<" Otro producto? ";
           cin>>cob;         
           cout<<"\n"; 
         }
         iva= (total*.16)+total;
         cout<<"\n";
         cout<<" El total comprado es de: $"<<pres[0][2]<<"\n";
         cout<<"\n";
         
         cout<<" Con el iva del 16%: $"<<iva;
         cout<<"\n";
         cout<<"\n";
         cout<<" "<<cli<<" gracias por haber comprado en esta Fruteria.\n";
         cout<<"\n";
         cout<<" Le atendio "<<cajero<<" el dia: "<<d<<"/"<<mes<<"/"<<an;
         cout<<"\n";
         cout<<"\n";
         cout<<" Que tenga un Buen dia! \n";
    }
      cout<<"\n"; 
      cout<<"Continuaras en el sistema? (si/no) ";
      cin>>opp;
}

getch();      
}

