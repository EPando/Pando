#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct vende
{
      string nav, d, m, an, obv;
      float preo, des, cantart, iva, total;
      
      };
struct compra
{
       string nac;
       float resart, guardres;
       
       };
struct Inventario
{
       float cart, pru;
       };
vende dor[1000];
compra to[1000];
int cex=350, s=0;
float ptu=13.92, ptuc=11.01, ptor=27.02, ptur= 6.32, clav=15.69,clavi=12.58, tuvc=3.48,tuvec=2.97 , tuco=4.13, tucos=5.74;
string ans, ans2, ser, seein;
int numo, dori, r=0, t=0;

int main()
{
    system("color 3");
    cout<<"\n\t *** Universidad Politecnica de Durango ***";
    cout<<"\n\t * Emmanuel Vazquez Pando *";
    cout<<"\n\t ** Programacion estructurada **\n";
    cout<<"\n";
    cout<<" < Sistema de Registro de ventas e inventariado de una Ferreteria > \n";
    cout<<"\n";
cout<<" Para continuar escribe ok ";
cin>>ans;
cout<<"\n";
while (ans=="ok")
 {
   cout<<" Bienvenido, que te gustaria hacer? ";
   cout<<"\n";
   cout<<" 1.- Ver inventario.\n"; 
   cout<<" 2.- Registrar ventas.\n";
   cout<<"\n";
   cout<<" ";
   cin>>numo;
   if(numo==1)
   {
              cout<<"\n\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
              cout<<" A continuacion el inventario de inicio";
              cout<<"\n";
              cout<<"\n";
              cout<<" 1.- Tubo de cobre (1/8)in: "<<cex<<"m || Precio por metro: $"<<tuco<<"\n";
              cout<<" 2.- Tubo de cobre (1/4)in: "<<cex<<"m || Precio por metro: $"<<tucos<<"\n";
              cout<<" 3.- Tubo de PVC (3/4)in: "<<cex<<"m || Precio por metro: $"<<tuvc<<"\n";
              cout<<" 4.- Tubo de PVC (1/2)in: "<<cex<<"m || Precio por metro: $"<<tuvec<<"\n";
              cout<<" 5.- clavos 4 in : "<<cex<<"kg || Precio por kg: $"<<clav<<"\n";
              cout<<" 6.- clavos 2 in : "<<cex<<"kg || Precio por kg: $"<<clavi<<"\n";
              cout<<" 7.- Tornillo cabeza hexagonal (5/16) : "<<cex<<"kg || Precio por kg: $"<<ptor<<"\n";
              cout<<" 8.- Tornillo cabeza redonda (3/4): "<<cex<<"kg || Precio por kg: $"<<ptur<<"\n";
              cout<<" 9.- Tuerca Hexagonal (3/8): "<<cex<<"kg || Precio por kg: $"<<ptu<<"\n";
              cout<<" 10.- Tuerca Cuadrada (1/2): "<<cex<<"kg || Precio por kg: $"<<ptuc<<"\n";
              cout<<"\n";

   
   }
   
   if (numo==2)
   {
          cout<<"\n";
          cout<<"Continuar (si/no) ";
          cin>>ans2;
          while(ans2=="si")
          {
             cout<<"\n";
             cout<<" Nombre del vendedor: ";
             cin>>dor[s].nav;
             cout<<"\n";
             cout<<" Dia: ";
             cin>>dor[s].d;
             cout<<"\n";
             cout<<" Mes: ";
             cin>>dor[s].m;
             cout<<"\n";
             cout<<" Anhio: ";
             cin>>dor[s].an;
             cout<<"\n";
             cout<<" Nombre del comprador: ";
             cin>> to[s].nac;
             cout<<"\n";
             cout<<" Articulo Vendido: ";
             cout<<"\n";
             cout<<" 1.- Tubo de cobre (1/8)in \n";
             cout<<" 2.- Tubo de cobre (1/4)in \n";
             cout<<" 3.- Tubo de PVC (3/4)in \n";
             cout<<" 4.- Tubo de PVC (1/2)in \n";
             cout<<" 5.- clavos 4 in \n";
             cout<<" 6.- clavos 2 in \n";
             cout<<" 7.- Tornillo cabeza hexagonal (5/16) \n";
             cout<<" 8.- Tornillo cabeza redonda (3/4) \n";
             cout<<" 9.- Tuerca Hexagonal (3/8) \n";
             cout<<" 10.- Tuerca Cuadrada (1/2) \n";
             cout<<"\n";
             cout<<" ";
             cin>>dori;
             cout<<"\n";
             cout<<" Cantidad Vendida: ";
             cin>>dor[s].cantart;
             if(dori==1)
                 {
                 dor[s].preo= tuco;
                 dor[s].obv="Tubo de cobre (1/8)in";\
                 to[0].guardres= dor[s].cantart + to[0].guardres;
                 }
             if(dori==2)
                 {
                 dor[s].preo= tucos;
                 dor[s].obv="Tubo de cobre (1/4)in";
                 to[1].guardres= dor[s].cantart + to[1].guardres;
                 }
             if(dori==3)
                 {
                  dor[s].preo=tuvc;
                  dor[s].obv="Tubo de PVC (3/4)in";
                  to[2].guardres= dor[s].cantart + to[2].guardres;
                 }
             if(dori==4)
                 {
                 dor[s].preo= tuvec;
                 dor[s].obv="Tubo de PVC (1/2)in";               
                 to[3].guardres= dor[s].cantart + to[3].guardres;
                 }
             if(dori==5)
                 {
                 dor[s].preo=clav;
                 dor[s].obv="Clavos de 4 in (3/4)in";
                 to[4].guardres= dor[s].cantart + to[4].guardres;
                 } 
             if(dori==6)
                 {
                  dor[s].preo=clavi;
                  dor[s].obv="Clavos de 2 in (3/4)in";
                  to[5].guardres= dor[s].cantart + to[5].guardres;              
                 }       
             if(dori==7)
                 {
                 dor[s].preo=ptor;
                 dor[s].obv="Tornillos cabeza hexagonal (5/16) in";
                 to[6].guardres= dor[s].cantart + to[6].guardres;
                 }
             if(dori==8)
                 {
                 dor[s].preo=ptur;
                 dor[s].obv="Tornillos cabeza redonda (3/4) in";
                 to[7].guardres= dor[s].cantart + to[7].guardres;            
                 }
             if(dori==9)
                 {
                 dor[s].preo=ptu;
                 dor[s].obv= "Tuerca Hexagonal (3/8)";
                 to[8].guardres= dor[s].cantart + to[8].guardres;
                 } 
             if(dori==10)
                 {
                 dor[s].preo=ptuc;      
                 dor[s].obv="Tuerca Cuadrada (1/2)";
                 to[9].guardres= dor[s].cantart + to[9].guardres;
                 }
             cout<<"\n";     
             dor[s].total= (dor[s].cantart * dor[s].preo);
             cout<<"\n";
             if (dor[s].total>50)
             {
                                 
             dor[s].des= dor[s].total * .5;
             dor[s].iva=(dor[s].total * .16)+ dor[s].des;
             cout<<" El total de la venta fue afectado por un descuento del 50%";
             cout<<"\n";
             cout<<" Total de la venta: "<<dor[s].total;
             cout<<"\n";
             cout<<" Total con descuento "<<dor[s].des;
             cout<<"\n";
             cout<<" Total con descuento $"<<dor[s].des<<", total completo (ya incluido el iva) $"<<dor[s].iva;
             cout<<"\n";
             
             }
             else
             {
             dor[s].iva= (dor[s].total *.16) + dor[s].total;
             cout<<" Total de la venta: "<<dor[s].total;
             cout<<"\n";
             cout<<" Total sin poder aplicar descuento $"<< dor[s].total;
             cout<<"\n";
             cout<<" Total completo (ya incluido el iva) $"<<dor[s].iva;
             cout<<"\n";
                        
             }
             cout<<"\n";
             cout<<"Seguiras registrando? ";
             cin>>ans2;
             s=s+1; 
          }
          cout<<"\n";
          cout<<"\n Quieres ver los registros? ";
          cin>>ser;
          if (ser=="si")
          {
           for (r=0;r<s;r++)
           {
           cout<<"\n";
           cout<<"\n";
           cout<<" Vendedor: "<<dor[r].nav;
           cout<<"\n";
           cout<<" Comprador: "<<to[r].nac;
           cout<<" En la fecha de: "<<dor[r].d<<"/"<<dor[r].m<<"/"<<dor[r].an;
           cout<<"\n Articulo vendido: "<<dor[r].obv;
           cout<<"\n";
           cout<<" Cantidad vendida: "<<dor[r].cantart;
           cout<<" Precio unitario $"<<dor[r].preo;
           cout<<"\n Total Pagado: $"<<dor[r].iva;
           
           }
          }
       cout<<"\n";
       cout<<"\n";
       cout<<" Ver nuevo inventario (si/no).\n";
       cin>>seein;
       if (seein=="si")
       {
              for(t=0; t<=9; t++)
                {
                to[t].resart= cex- to[t].guardres;  
                }
              
              cout<<"\n";
              cout<<" A continuacion el inventario de modificado";
              cout<<"\n";
              cout<<"\n";
              cout<<" 1.- Tubo de cobre (1/8)in: "<<to[0].resart <<"m || Precio por metro: $"<<tuco<<"\n";
              cout<<"\n";
              cout<<" 2.- Tubo de cobre (1/4)in: "<<to[1].resart<<"m || Precio por metro: $"<<tucos<<"\n";
              cout<<"\n";
              cout<<" 3.- Tubo de PVC (3/4)in: "<<to[2].resart<<"m || Precio por metro: $"<<tuvc<<"\n";
              cout<<"\n";
              cout<<" 4.- Tubo de PVC (1/2)in: "<<to[3].resart<<"m || Precio por metro: $"<<tuvec<<"\n";
              cout<<"\n";
              cout<<" 5.- clavos 4 in : "<<to[4].resart<<"kg || Precio por kg: $"<<clav<<"\n";
              cout<<"\n";
              cout<<" 6.- clavos 2 in : "<<to[5].resart<<"kg || Precio por kg: $"<<clavi<<"\n";
              cout<<"\n";
              cout<<" 7.- Tornillo cabeza hexagonal (5/16) : "<<to[6].resart<<"kg || Precio por kg: $"<<ptor<<"\n";
              cout<<"\n";
              cout<<" 8.- Tornillo cabeza redonda (3/4): "<<to[7].resart<<"kg || Precio por kg: $"<<ptur<<"\n";
              cout<<"\n";
              cout<<" 9.- Tuerca Hexagonal (3/8): "<<to[8].resart<<"kg || Precio por kg: $"<<ptu<<"\n";
              cout<<"\n";
              cout<<" 10.- Tuerca Cuadrada (1/2): "<<to[9].resart<<"kg || Precio por kg: $"<<ptuc<<"\n";
              cout<<"\n";
              
       }
   }
   cout<<"\n";
   cout<<" Seguiras en el sistema? (ok/no) ";
   cin>>ans;
   cout<<"\n";  
 }

getch();
}
