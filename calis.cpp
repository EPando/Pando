#include <stdio.h> /* define entrada/salida estandar */

int main()
{
    int c;

    printf("Introduzca cualquier caracter y presione enter,"
      "X = termina el programa.\n");
    do
    {
        c = getchar();  /* Toma un caracter del teclado */
        putchar(c);     /* Despliega el caracter en el monitor */
    }
    while (c != 'X');   /* Mientras que sea diferente de X */
    printf("\nFin del programa.\n");
    return 0;
}
