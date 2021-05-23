/*
* author: Henry gonzalez
* create on 23 de mayo del 2021
*/
#include<stdio.h>
#include<conio.h>

/*
*	Ejercicio 5: Hacer un programa en C que nos permita contar y saber los múltiplos de 3
*	desde la unidad hasta un número que introducimos por teclado.
*/
int numero,n, contador = 0;
int main()
{

	
    printf( " Ingrese un numero\n" );
    scanf("%d", &n);

    for ( numero = 1 ; numero <=n ; numero ++ )
    {
    	if( numero % 3 == 0){
        	printf( "%d ", numero);
			contador ++;
		}
    }
    printf( "\n Total de numeros que son multiplos de (3): %d", contador);
    getch(); /* Pausa */

    return 0;
}
