#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<iostream>

using namespace std;
int el, ele;
struct nodoarbol                        //ESTRUCTURA DEL ARBOL
{
	struct nodoarbol *izqnodo;
	int info;
	struct nodoarbol *dernodo;
};
int i,frstm=0,sw ;                     //CONTADOR
typedef struct nodoarbol NODO;    //DEFINICION DE TIPO NODO
typedef NODO *ARBOL;               //DECLARACION DE VARIABLE PUNTERO A NODO

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
void insertanodonuevo(ARBOL *,int);    //DECLARACION DE FUNCIONES
void inorden(ARBOL);
void preorden(ARBOL);
void postorden(ARBOL);
void treefree(ARBOL);
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

/*-----------------------<FUNCION PRINCIPAL>--------------------------------*/

    void bonito()
    {
      system ("color F1");
      cout<<"\n    ";
      cout<<"\n    U N i V E R S i D A D    P O L i T E C N i C A  De   D U R A N G O. ";    
      cout<<"\n    ";
      cout<<"\n                Programacion de Estructura de Datos.";
      cout<<"\n           Alfredo Ochoa Lopez --- Emmanuel Vazquez Pando.";
      cout<<"\n                           Arbol Binario.";
     }
int main()
{
	

	char newnod, elementos;    //DECLARACION DE CADENA,BANDERA Y VARIABLE QUE CONTIENE EL NUEVO VALOR A INSERTAR EN EL ARBOL
	std::string resp="",var,stringelementos; 
    
	system("cls");
	ARBOL raiz=NULL;
                    //DECLARACION DE VARIABLE DE TIPO 
	denuevo:
    bonito();
    cout<<"\n      ";
    cout<<"\n        Bienvenido que deseas hacer? ";
    cout<<"\n      1.- Hacer el arbol y recorrerlo.";
    cout<<"\n      2.- Eliminar Datos.";
    cout<<"\n      3.- Salir.";
    cout<<"\n      ";
    cout<<"\n      ";
    cin>>sw;
    switch (sw)
	{
    case 1:
    while(resp!="n" || resp!="N")
	{
		if(frstm==0)
		{
			system("cls");
			
			printf("\n\n\tAgregue el elemento raiz\n");
			cout<<"\t";
			cin>>var;
			stringelementos+=var;//chain=chain+var;
			frstm++;
		}
		if(frstm>=1)
		{
			system("cls");
			printf("\n\n\tDesea agregar otro elemento? S/N\n");
			cout<<"\t";
			cin>>resp;
		}
		if(resp=="s" || resp=="S")
		{
			printf("\n\n\tEscriba el elemento a agregar\n");
			cout<<"\t";
			cin>>var;
			stringelementos+=var;//chain=chain+var;
		}
		else{	char *chain = strdup(stringelementos.c_str());
	elementos=strlen(chain);         //CHECA EL TAMANO DE LA CADENA Y ESTABLECE EL NUMERO DE NODOS DEL ARBOL
	for(i=1;i<=elementos;i++)
	{
		newnod=chain[i-1];
		insertanodonuevo(&raiz,newnod);
	}
	printf("\n\n preorden ¯¯\t");
	preorden(raiz);                 //LLAMADO A FUNCION DE RECORRIDO EN PREORDEN
	printf("\n\n inorden  ¯¯\t");
	inorden(raiz);                  //LLAMADO A FUNCION DE RECORRIDO EN INORDEN
	printf("\n\n postorden ¯¯\t");
	postorden(raiz);                //LLAMADO A FUNCION DE RECORRIDO EN POSTORDEN
	getch();
	treefree(raiz);            //LIBERACION DE MEMORIA DEL ARBOL.
	raiz=NULL;		  //ASIGNACION DE UN VALOR NULO A LA RAIZ.
	 system("cls");
     goto denuevo;}
	}

  
   case 2:
        cout<<"\n      ";
        while(resp == "s" || resp == "S")
        {
        cout<<"\n    Como desea Eliminar?  ";
        cout<<"\n    1.- Elminar una hoja.";
        cout<<"\n    2.- Eliminar Padre con un hijo.  ";
        cout<<"\n    3.- Eliminar Padre con 2 hijos.  ";
        cout<<"\n      ";
        cin>>el;
        if(el == 1)
        {
        system ("cls");
        cout<<"\n\n\n\n     Que elemento vas a eliminar?    ";
        cin>>ele;
          if(ele < raiz)
          {
          while(ele != preorden(raiz))       
          {
          preorden(raiz)
          }
          
          }
          else
          {
          postorden(raiz)
          
          }
        
        
        }
        if(el == 2)
        {
        
        }
        if(el == 3)
        {
        
        
        }
        cout<<"\n     Eliminar  otro?  ";
        cin>>resp;
        }
        
        cout<<"\n      ";
        system("Pause");
        system("cls");
        goto denuevo;
   case 3:
        
        break;
   }
}

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-CREA UN NUEVO NODO Y COLOCA LOS VALORES DEL NUEVO ELEMENTO EN LA POSICION CORRESPONDIENTE */

void insertanodonuevo(ARBOL *rarbol,int nuevo)
{
	if(*rarbol==NULL)                          //CREACION DE UN NUEVO NODO
	{
		*rarbol=(NODO *)malloc(sizeof(NODO));
		if(*rarbol!=NULL)
		{//ASIGNACION DE VALORES NUEVOS EN EL NODO NUEVO
			(*rarbol)->info=nuevo;
			(*rarbol)->izqnodo =NULL;
			(*rarbol)->dernodo=NULL;
		}
		else{printf("\n Memoria No Disponible !!!!\n");}
	}
	else if(nuevo<(*rarbol)->info)  //checa si el elemento nuevo es mayor que el elemento padre
		insertanodonuevo(&((*rarbol)->izqnodo),nuevo);  //coloca el elemento a la izquierda del padre o raiz
	else if(nuevo>(*rarbol)->info)  //checa si el elemento nuevo es menor que el elemento padre
		insertanodonuevo(&((*rarbol)->dernodo),nuevo);  //coloca el elemento a la derecha del padre o raiz
}
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
void preorden(ARBOL rarbol)
{
	if(rarbol!=NULL)
	{	
		printf(" %c ",rarbol->info);
		preorden(rarbol->izqnodo);
		preorden(rarbol->dernodo);
	}
}
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
void inorden(ARBOL rarbol)
{
	if(rarbol!=NULL)
	{
		inorden(rarbol->izqnodo);
		printf(" %c ",rarbol->info);
		inorden(rarbol->dernodo);
	}
}
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
void postorden(ARBOL rarbol)
{
	if(rarbol!=NULL)
	{
		postorden(rarbol->izqnodo);
		postorden(rarbol->dernodo);
		printf(" %c ",rarbol->info);
	}
}
/**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
void treefree(ARBOL rarbol)
{
	if(rarbol!=NULL)
	{
		treefree(rarbol->izqnodo);
		treefree(rarbol->dernodo);
		free(rarbol);
	}
}
