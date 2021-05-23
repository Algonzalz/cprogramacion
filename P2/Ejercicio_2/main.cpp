/*
* author: Henry gonzalez
* create on 22 de mayo del 2021
*/
#include<stdio.h>
#include<conio.h>

/*
*	Ejercicio 2: Hacer un programa en C que imprima los números pares, después de leer
*	un número positivo introducido por el teclado.	
*/
int numero;
float n;
int main()
{

	
    printf( " Ingrese un numero positivo\n" );
    scanf("%f", &n);

    for ( numero = 2 ; numero <= n ; numero += 2 )
    {
        printf( "%d ", numero );
    }

    getch(); /* Pausa */

    return 0;
}
