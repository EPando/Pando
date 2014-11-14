#include <iostream>
#include <string>
#include<conio.h>

using namespace std;

int op=0;

// INICIO DE LA CLASE
class estudiante
{
    protected: // DECLARACION DE LOS IDENTIFICADOES QUE SE UTILIZARAN EN LA CLASE
       string matricula;
       string nombre;   
       string carrera;
       int cuatri;
       int ingreso;
       int cal1,cal2,cal3;

    public: // DECLARACION DE LOS METODOS DE LA CLASE
    
      void inicializar()  // METODO DE INICIALIZAR DATOS
       {
          matricula="00000";
          nombre="-----";   
          carrera="------";
          cuatri=0;
          ingreso=0;
          cal1=0;
          cal2=0;
          cal3=0;  
       }
       
       
       void mostrar()  // METODO DE MOSTRAR DATOS
       {
            system("cls");
            cout<<"      D A T O S   A L U M N O               \n"; 
            cout<<"\n";
            cout<<"         Matricula: "<<matricula<<"\n";
            cout<<"         Nombre: "<<nombre<<"\n";
            cout<<"         Carrera: "<<carrera<<"\n";
            cout<<"         Cuatrimestre: "<<cuatri<<"\n";
            cout<<"         Ingreso: "<<ingreso<<"\n";
            cout<<"         Calificacion 1: "<<cal1<<"\n";
            cout<<"         Calificacion 2: "<<cal2<<"\n";                        
            cout<<"         Calificacion 3: "<<cal3<<"\n";            
            cout<<"               Promedio: "<<(cal1+cal2+cal3)/3<<"\n";            
            cout<<"\n";
            system("PAUSE");
       }
       
       
      void capdatos()  // METODO PARA CAPTURAR LOS DATOS PERSONALES
       {
            system("cls");
            cout<<"    C A P T U R A R   D A T O S   A L U M N O      \n"; 
            cout<<"\n";
            cout<<"         Matricula: ";cin>>matricula;
            cout<<"         Nombre: ";cin>>nombre;
            cout<<"         Carrera: ";cin>>carrera;
            cout<<"         Cuatrimestre: ";cin>>cuatri;
            cout<<"         Ingreso: ";cin>>ingreso;                
            cout<<"\n";
            system("PAUSE");
       }


      void capcalif()  // METODO PARA CAPTURAR LOS DATOS PERSONALES
       {
            system("cls");
            cout<<"C A P T U R A R   C A L I F I C A C I O N E S   A L U M N O   \n"; 
            cout<<"\n";
            cout<<"         Nombre: "<<nombre<<"\n";
            cout<<"         Calificacion 1: ";cin>>cal1;
            cout<<"         Calificacion 2: ";cin>>cal2;                        
            cout<<"         Calificacion 3: ";cin>>cal3;
            cout<<"               Promedio: "<<(cal1+cal2+cal3)/3<<"\n";                        
            cout<<"\n";
            system("PAUSE");
       }


      void egreso()  // METODO PARA CAPTURAR LOS DATOS PERSONALES
       {
            system("cls");
            cout<<"           D A T O S   A L U M N O   \n"; 
            cout<<"\n";
            cout<<"         Nombre: "<<nombre<<"\n";
            cout<<"         Egreso: "<<ingreso+4<<"\n";                                    
            cout<<"\n";
            system("PAUSE");
       }                      
       
};
// FIN DE LA CLASE

estudiante s[3]; // DECLARO UN VECTOR DE TRES POSICIONES DEL TIPO "ESTUDIANTE", LA CUAL ES UNA CLASE
                 // SOLO VOY A EMPLEAR LA PRIMER POSICION PARA ESTE EJEMPLO.
                 
void head()  // ENCABEZADO DEL PROGRAMA, ES UN PROCEDIMIENTO
{
 cout<<"        U N I V E R S I D A D   P O L I T E C N I A   D E   D U R A N G O    \n"; 
 cout<<"               I N G E N I E R I A   E N   T E L E M A T I C A    \n"; 
 cout<<"                    E S T R U C T U R A   D E   D A T O S     \n"; 
 cout<<"               E J E M P L O   D E   C L A S E S   E N   C + +      \n";                                           
 cout<<"\n\n";
 cout<<"                       1- Mostrar Datos Alumno      \n";                                            
 cout<<"                       2- Capturar Datos Personales      \n";                                            
 cout<<"                       3- Capturar Calificaciones      \n";                                            
 cout<<"                       4- Anio de Egreso      \n";   
 cout<<"                       5- Salir      \n";   
 cout<<"\n";
 cout<<"                       Seleccione Opcion: ";cin>>op;   
}                  

int main()  // CUERPO PRINCIPAL DEL PROGRAMA
{
  
  s[1].inicializar(); // INICIALIZO LOS DATOS DEL OBJETO
  
  x:
    system("cls"); // LIMPIO PANTALLA
    head(); // EJECUTO EL PROCEDIMIENTO HEAD
 
  
  switch(op) // UN SWITCH PARA LAS OPCIONES 
  {
        case 1: s[1].mostrar(); goto x;
                
        case 2: s[1].capdatos(); goto x;         

        case 3: s[1].capcalif(); goto x;
                 
        case 4: s[1].egreso(); goto x; 
        
        case 5: 
        break;         
          
        default: goto x;
    
  }
  
}
