#include <iostream>
#include <string>

using namespace std;

int op,cc=0; // Variable para la opcion del menu, cantidad contactos

struct contacto {       // Estructura del contacto,
        string nombre;  
        contacto *siguiente; //Contiene un apuntador del mismo tipo que la estructura que apunta al siguiente
        };                          

contacto *primero=NULL, *ultimo=NULL; // Declaro dos apuntadores que me indican la direccion del primer y ultimo contacto
contacto *nuevo=NULL,*aux=NULL; // Nuevo es en el que se crea cada nuevo contacto, aux es el que me ayuda a ir recorriendo la LISTA

void menu() { // Menu para las opciones de los contactos
      cout<<"\nLISTAS ENLAZADAS SIMPLES\n";
      cout<<"1. Anadir contacto \n"; 
      cout<<"2. Borrar al Inicio \n";
      cout<<"3. Mostrar Todo\n";      
      cout<<"4. Salir\n\n";
      cout<<"Opcion: "; cin>>op;
 }
 
void mostrar() {
      if (primero==NULL) 
       {cout<< "\nVACIO ! \n\n";} // Si primero es NULL es que no hay contactos
       else 
       {  aux = primero; // Auxiliar sera el primero   
          while (aux!=NULL) // Mientras que la direccion del siguiente en auxiliar != NULL
          {cout<<"\n   Nombre: "<<aux->nombre<<"\n"; // Muestra el Nombre                
            aux = aux->siguiente;}//Auxiliar ahora tendra al siguietne en la lista
        }
   cout<<"\n";       
   system("PAUSE");        
 } 

void crear_contacto()
{
   nuevo = new contacto; // Le asigno un nuevo espacion de memoria a nuevo
   if (nuevo==NULL) // Si es NULL es que no se pudo reservar la memoria 
     {cout<< "No hay memoria disponible! \n";}
    else
     { // CAPTURO LOS DATOS       
          cout<<"\n\n   Nombre: ";   cin>>nuevo->nombre;
          nuevo->siguiente = NULL; // El campo siguiente de nuevo lo apunto a NULL
     }     
}

void anadir_final(){  
     
     crear_contacto();  
    
      if (primero==NULL) // SI primero == NULL es que es el primer reguistro
         {primero = nuevo; // EL primero sera el nuevo
          ultimo = nuevo;} // El ultimo  sera el nuevo 
      else // ES que ya existia por lo menos uno, entonces: 
         {ultimo->siguiente = nuevo;  //el que hasta ahora era el ?ltimo tiene que apuntar al nuevo 
          ultimo = nuevo;}   //hacemos que el nuevo sea ahora el ?ltimo 
      
      cc++; // Aumenta la cantidad de Registros
}

void eliminar_inicio(){

      if (primero==NULL) 
       {cout<< "\nVACIO!\n\n";// Si primero es NULL es que no hay contactos
        system("PAUSE");
       } 
       else 
       {     
          aux = primero; // Auxiliar sera el primero
          aux = aux->siguiente; // Avanzo al siguiente
          primero=aux;  // El primero ahora sera el segundo
          cc--; //disminuyo la cantidad de contactos
        }   
}

int main()
{
    a:
    system("cls");      
    menu();
    switch(op)
    {
       case 1:   anadir_final();
                 goto a;
       case 2:   eliminar_inicio();
                 goto a;
       case 3:   mostrar();
                 goto a;             
        default:
                  break;        
   }    
      
}
