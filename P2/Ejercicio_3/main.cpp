/*
* author: Henry gonzalez
* create on 23 de mayo del 2021
*/
#include<stdio.h>
#include<conio.h>

/*
*	Ejercicio : Ingresar un número entero y efectuar la suma de todos los números que lo
*	anteceden, comenzando desde 0 y mostrar resultado por pantalla.	
*/
int numero,n;
int contador = 0;
int main()
{

	
    printf( " Ingrese un numero\n" );
    scanf("%d", &n);

    for ( numero = 0 ; numero < n ; numero ++ )
    {
        contador += numero;
    }
	printf( "Suma de todos los numeros : %d", contador);
    getch(); /* Pausa */

    return 0;
}
