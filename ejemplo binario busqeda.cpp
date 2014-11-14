#include <iostream>
//#include "quicksort.h"
	 
	using namespace std;
	 
	int busqueda_lineal(int *array,int buscado,int tam)
	{
	    for(int i=0;i<tam;i++){
	        if(buscado==array[i]){
	          cout << "Se encuentra en la posicion " << i+1 << endl;
	        }
	   }
	}
	 
	int busqueda_binaria(int *array, int buscado, int tam)
	{
	    int medio, inicio, fin;
	    inicio = 0;
	    fin = tam-1;
	 
	    while(inicio <= fin){
	      medio = (inicio + fin) / 2;
	 
	      if(buscado == array[medio]){
	        cout << "Se encuentra en la posicion " << medio + 1 << endl;
	        return array[medio];
             } else{
	          if(array[medio] > buscado){
            fin = medio - 1;
	          } else {
	            inicio = medio + 1;
	          }
	      }
	    }
	    return -1;
	}
	 
	void imprimir(int *array,int tam)
	{
	   for(int i=0;i<tam;i++){
	        cout << array[i] << "  ";
	   }
	   cout << endl << endl;
	}
	 
	int main()
	{
	    int tam;
	    int buscado;
	    cout << "Ingresa el tamanyo del array" << endl;
	    cin >> tam;
	 
	    int array[tam];
	 
	    srand(time(NULL));
	    for(int i=0;i<tam;i++){
	        array[i] = rand() % 100;
	    }
	 
	    cout << endl;
	    cout << "Array al inicio " << endl;
	    imprimir(array,tam);
	 
	    cout << "Ingresa el elemento a buscar (Busqueda lineal) ";
	    cin >>buscado;
	    busqueda_lineal(array,buscado,tam);
	 
	    cout << "Array ordenado " << endl;
	    //quicksort(array,0,tam);
	    imprimir(array,tam);
	 
	    cout << "Ingresa el elemento a buscar (Busqueda binaria) ";
	    cin >>buscado;
	    busqueda_binaria(array,buscado,tam);
	    system("pause");
	 
	    return 0;
	}
