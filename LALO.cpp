#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;

int op,n,I,num;
float res;

stack <int> origen;
stack <int> aux;
stack <int> destino;

stack <int> copia1;
stack <int> copia2;
stack <int> copia3;
int main()
{
    cout<<"Universidad politecnica del estado de Durango"<<endl;
	cout<<"Carrera: Ing. en Telematica"<<endl;
	cout<<"MC Roobed Trejo Mier"<<endl;
	cout<<"Alumnos:"<<endl;
    cout<<"Eduardo Emmanuel Díaz Guillén"<<endl;
    cout<<"Fabian Gonzalez Rodriguez"<<endl;
    
    do{
				cout<<""<<endl;
				cout<<"Bienvenido al programa de Torres de Hainoi, estas son las opciones que tiene el menu"<<endl;
				cout<<"1= Insertar numeros en la torre"<<endl;
				cout<<"2= Ordenar"<<endl;
				cout<<"3= salir"<<endl;
				cout<<"Ingrese la opcion del siguiente menu"<<endl;
				
				cin>>op;
				
                cout<<""<<endl;

				switch (op){

				case 1:
                     I=1;
                     system("cls");
                     cout<<"Introdusca el numero de discos en la torre"<<endl;
                     cin>>n;
                     num=n;
                     cout<<endl;
                     
                     while(I<=n){
                     origen.push(n);
                     n=n-1;
                     }
                     
                     copia1=origen;
					 while (!copia1.empty()){
					     cout<<copia1.top()<<" ";
					     copia1.pop();
					 }
					 
					 
					 
					 
					 
					 
					 res=num % 2;
                     if(res==0){
                     
                     aux.push(origen.top());
                     origen.pop();
                     
                     copia1=origen;
					 while (!copia1.empty()){
					     cout<<copia1.top()<<" ";
					     copia1.pop();
					 }
					 cout<<endl;
					 
                     copia2=aux;
					 while (!copia2.empty()){
					     cout<<copia2.top();
					     copia2.pop();
					 }
                     }else{
                     cout<<"el numero es impar"<<endl;
                     }
					 
					 cout<<endl;
					 cout<<origen.top()<<endl;
					 
				break;


				case 2:
				break;

				case 3:
				break;

				default:
				cout<<"Error intente de nuevo"<<endl;
				}


				}while (op!=3);

    system("PAUSE");
    return EXIT_SUCCESS;
}
