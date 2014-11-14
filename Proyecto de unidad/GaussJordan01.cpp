#include <iostream>
using namespace std;

int main()
{
    int leer, var1=0, piv=0;
    cout << "\t ** Este programa muestra la solucion de un sistema de ecuaciones \n\t\tlineales a traves del metodo Gauss_Jordan **" << endl;
    cout << "\n ¿Cuantas variables tiene tu sistema?" << endl;
    cin >> leer;
    var1 = leer;
    float matriz[var1][var1+1];
    for(int x=0; x<var1; x++)
    {
            for(int y=0; y<(var1+1); y++)
            {
                    cout << "Ingresa la constante de la posicion: A[" << (x+1) << "][" << (y+1) << "]" << endl;
                    cin >> matriz[x][y];
            }
    }
    float temp=0;
    for(int a=0; a<var1; a++)
    {
            //----------------PIVOTE----------------------------
            temp=0;
            temp=matriz[piv][piv];
            for(int y=0;y<(var1+1);y++)
            {
                    matriz[piv][y]=matriz[piv][y]/temp;
            }
            //--------------------------------------------------
            cout << "\tRenglon " << (a+1) << " entre el pivote" << endl;
            //-------------------MUESTRA MATRIZ-----------------
            for(int x=0;x<var1;x++)
            {
                    for(int y=0;y<(var1+1);y++)
                    cout << " " << matriz[x][y] << " |" << endl;
                    cout << "\n" << endl;
            }
            //--------------------------------------------------
            cout << "\n" << endl;
            cout << "\tHaciendo ceros" << endl;
            //----------------HACER CEROS-----------------------
            for(int x=0;x<var1;x++)
            {
                    if(x!=piv)
                    {
                              float c=matriz[x][piv];//tempo
                              for(int z=0;z<(var1+1);z++)
                                   matriz[x][z]=((-1*c)*matriz[piv][z])+matriz[x][z];//matriz [0][2]
                    }
            }
            //--------------------------------------------------
            
            //-------------------MUESTRA MATRIZ-----------------
            for(int x=0;x<var1;x++)
            {
                    for(int y=0;y<(var1+1);y++)
                    cout << " " << matriz[x][y] << " |" << endl;
                    cout << "\n" << endl;
            }
            //--------------------------------------------------
            cout << "\n" << endl;
            piv++;
    }
    for(int x=0;x<var1;x++)
      cout << "La variable X" << (x+1) << " es: " << matriz[x][var1] << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
