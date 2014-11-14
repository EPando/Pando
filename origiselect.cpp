#include <iostream>
using namespace std;
int main()
{
    int i,j,temp, x[10];

        cout << "Ingrese el " << (i+1) << "' numero: ";
        cin >> x[i];
    int minimo=0;
    for(i=0 ; i<9 ; i++)
    {
            minimo=i;
            for(j=i+1 ; j<10 ; j++)
            {
                      if (x[minimo] > x[j]) minimo=j;
            }
            temp=x[minimo];
            x[minimo]=x[i];
            x[i]=temp;
}
cout << "\nVector ordenado: " << endl;

for (i=0;i<10;i++) cout << x[i] << "\n";
system("pause");
cin.get();
}
