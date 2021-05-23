/*
* author: Henry gonzalez
* create on 23 de mayo del 2021
*/
#include<stdio.h>
#include<conio.h>

/*
*	Ejercicio : Hacer un programa en C que imprima todos los números naturales que hay
*	desde la unidad hasta un número que introducimos por teclado.
*/
int numero,n;
int main()
{

	
    printf( " Ingrese un numero\n" );
    scanf("%d", &n);

    for ( numero = 0 ; numero < n ; numero ++ )
    {
        printf( "%d ", numero);
    }
    getch(); /* Pausa */

    return 0;
}
