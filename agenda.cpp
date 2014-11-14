#include <iostream>
#include <string>
using namespace std;
int s=1,canti=0, c=1, ban=0;
struct contact
{
       string nombrecin;
       string tel;
       string direccion;
       string mali;
       contact *vamos;
       };
contact *aqi=NULL, *alla= NULL, *allas= NULL, *help=NULL, *impostor=NULL;
contact *otro=NULL, *vente= NULL, *mientras= NULL, *ayuda=NULL, *asi=NULL;
int vi, mas, o;
string nom;
void inicio() {
      system("color 81ñ"); 
      cout<<"\n    ";
      cout<<"\n    U N i V E R S i D A D    P O L i T E C N i C A  De   D U R A N G O. ";    
      cout<<"\n    ";
      cout<<"\n                Programacion de Estructura de Datos.";
      cout<<"\n                      Emmanuel Vazquez Pando.";
      cout<<"\n                          Listas Enlazadas.";  
      cout<<"\n\n                               Agenda\n";
      cout<<"\n 1.- Ingresar Informacion de Contacto. "; 
      cout<<"\n 2.- Buscar contacto.";
      cout<<"\n 3.- Mostrar contactos.";      
      cout<<"\n 4.- Eliminar contacto.";
      cout<<"\n 5.- Modificar Contactos. ";
      cout<<"\n 6.- Adios!.";
      cout<<"\n   ";
      cout<<"\n   "; 
      cin>>o;
 }
void ingresar()
{
               otro= new contact;
               if(otro == NULL)
               {
                  cout<<"\n   Sin espacio en Memoria... :/ ";     
               }
               else
               {
                cout<<"\n   ";
                cout<<"\n   Nombre: ";
                cin>>otro->nombrecin;
                cout<<"\n   Telefono: ";
                cin>>otro->tel;
                cout<<"\n (Recomendacion separa con guion bajo) ";
                cout<<"\n   Direccion: ";
                cin>>otro->direccion;
                cout<<"\n   E-m@il : ";
                cin>>otro->mali;
                otro->vamos = NULL;
               }

}       
int main ()
{
 denuevo:
 system("cls");        
 inicio();
 switch(o)
 {
          case 1:
               cout<<"\n 1.- Al inicio. "; 
               cout<<"\n 2.- En posicion.";
               cout<<"\n 3.- Al final.";      
               cout<<"\n                           ";
               cin>>vi;
               if(vi==1)
               {
               ingresar();
               if(aqi == NULL)
               {
               allas = otro;
               aqi = otro;
               }
               else  
               {
               alla = aqi;
               aqi = otro;
               aqi->vamos = alla;
               }
               }
               if(vi==2)
               {
               vente=aqi;
               c=1;
               
                while(vente!=NULL)
                {
                                  
                 cout<<"\n   ";
                 cout<<"\n "<<c++<<"   Nombre: "<<vente->nombrecin;
                 cout<<"\n     Telefono: "<<vente->tel;
                 cout<<"\n     Direccion: "<<vente->direccion;
                 cout<<"\n     E-m@il : "<<vente->mali;
                 vente= vente->vamos;
                }
               cout<<"\n               Despues de quien entrara el dato? ";
               cin>>nom;
               asi= new contact;
               cout<<"\n   ";
               cout<<"\n   Nombre: ";
               cin>>asi->nombrecin;
               cout<<"\n   Telefono: ";
               cin>>asi->tel;
               cout<<"\n (Recomendacion separa con guion bajo) ";
               cout<<"\n   Direccion: ";
               cin>>asi->direccion;
               cout<<"\n   E-m@il : ";
               cin>>asi->mali;
               
               mientras=aqi;
               while(mientras != NULL)
               {
                if(mientras->nombrecin == nom)
                {
                ayuda = mientras->vamos;
                mientras-> vamos= asi;
                mientras=mientras->vamos;
                asi->vamos = ayuda;
                }
                mientras=mientras->vamos;
               }
               cout<<"\n   AGREGADO ";
               cout<<"\n   ";
               cout<<"\n   ";
               system ("PAUSE");
               }
               
               if(vi==3)
               {
               ingresar();
               alla=allas;
               allas->vamos=otro;
               allas = otro;
               
               }
               
               canti++;
               
               goto denuevo;
          case 2:
               cout<<"\n   ";
               if(aqi != NULL)
               {
               ban=0;
               cout<<"   Para buscar introduce su Nombre: ";
               cin>>nom;
               vente = aqi;
               while(vente != NULL)
               {
                if(vente->nombrecin == nom)
                {
                              
                ban=ban + 1;
                cout<<"\n   ";
                cout<<"\n   Datos del contacto: ";
                cout<<"\n     Telefono: "<<vente->tel;
                cout<<"\n     Direccion: "<<vente->direccion;
                cout<<"\n     E-m@il : "<<vente->mali;
                cout<<"\n   ";
                cout<<"\n   ";
                vente= NULL;
                }
                else
                {
               vente = vente-> vamos;
                }
               }
               } 
               else
               {
                cout<<"\n   Sin contactos aun amigo!";
               }
               if(ban == 0)
               {
               cout<<"\n\n   No existe el contacto! ";
               }
               cout<<"\n   ";
               cout<<"\n   ";
               system ("PAUSE");
               goto denuevo;
               
          case 3:
               if(aqi == NULL)
               {
               cout<<"\n   No hay contactos!!!";
               }
               else
               {
               vente=aqi;
               c=1;
                while(vente!=NULL)
                {
                 cout<<"\n   ";
                 cout<<"\n "<<c++<<"   Nombre: "<<vente->nombrecin;
                 cout<<"\n     Telefono: "<<vente->tel;
                 cout<<"\n     Direccion: "<<vente->direccion;
                 cout<<"\n     E-m@il : "<<vente->mali;
                 vente= vente->vamos;
                }
               }
               cout<<"\n   ";
               cout<<"\n   ";
               system("pause");
               goto denuevo;
            case 4:
               if(aqi==NULL)
               {
               cout<<"\n No hay contacos! ";
               }  
               else
               {  
               cout<<"\n 1.- Al inicio. "; 
               cout<<"\n 2.- En posicion.";
               cout<<"\n 3.- Al final.";      
               cout<<"\n                           ";
               cin>>vi;
               if(vi==1)
               {
               cout<<"\n   Eliminado "<<aqi->nombrecin;         
               vente = aqi;
               vente = vente->vamos;
               aqi = vente;               
               }
               if(vi==2)
               {
               vente=aqi;
               c=1;
                while(vente!=NULL)
                {
                                  
                 cout<<"\n   ";
                 cout<<"\n "<<c++<<"   Nombre: "<<vente->nombrecin;
                 cout<<"\n     Telefono: "<<vente->tel;
                 cout<<"\n     Direccion: "<<vente->direccion;
                 cout<<"\n     E-m@il : "<<vente->mali;
                 vente= vente->vamos;
                }
               cout<<"\n               A quien vas a Eliminar? ";
               cin>>nom;
               mientras=aqi;
               while(mientras != NULL)
               {
                if(mientras->nombrecin == nom)
                {
                impostor = mientras;
                ayuda = mientras->vamos;
                }
                mientras = mientras->vamos;
               }
               
               cout<<"\n\n               Eliminado "<<nom;
               help=aqi;
               while(help-> vamos != impostor )
               {
               help = help->vamos;
               }
               help->vamos = ayuda;
               }
               if(vi==3)
               {
               cout<<"\n   Eliminado "<<allas->nombrecin;         
               vente=aqi;
               while(vente != NULL)
               {
                if(vente->vamos == allas)
                {
                vente-> vamos=NULL;
                vente = alla;
                }
                else
                {
                vente = vente->vamos;
                } 
               }
               allas=alla;
               }
               }
               canti--;
               cout<<"\n   ";
               cout<<"\n   ";
               system("PAUSE");
                 goto denuevo;
                 
                 
            case 5:
                 if (aqi==NULL) 
                   {
                   cout<<"\n     No hay contactos! ";
                   } 
                 else
                 {
                 cout<<"      Como se llama tu contacto? ";
                 cin>>nom;
                 vente=aqi;
                 while(vente != NULL)
                 {
                  if(nom == vente->nombrecin)
                  {
                   cout<<"\n   ";
                   cout<<"\n   Nombre: ";
                   cin>>vente->nombrecin;
                   cout<<"\n   Telefono: ";
                   cin>>vente->tel;
                   cout<<"\n (Recomendacion separa con guion bajo) ";
                   cout<<"\n   Direccion: ";
                   cin>>vente->direccion;
                   cout<<"\n   E-m@il : ";
                   cin>>vente->mali;
                   vente = vente->vamos;
                   vente= NULL;
                   }
                  else
                  {
                  vente = vente-> vamos;
                  }
                 }
                 } 
                 cout<<"\n   ";
                 cout<<"\n   ";
                 system("PAUSE");
                 goto denuevo;
           
            default:
                
                    break;
          
          
 }
}
