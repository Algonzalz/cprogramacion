/*
* author: Henry gonzalez
* create on 22 de mayo del 2021
*/
#include<stdio.h>
#include<conio.h>

/*
*	Ejercicio 1: De 10 números ingresados por teclado, indicar cuántos son mayores a cero
*	y cuántos son menores a cero. Mostrar resultados con sus mensajes
*	respectivos.
*/

int i;
int numero = 0;
int countMayor = 0;
int countMenor = 0;
main (){
	
	printf(" EJERICIO # 1 \n");
	
	for(i=0; i<10; i++){
		
		printf("%d. Ingrese el numero: ",i+1);
		
		scanf("%d", &numero);
		
		if(numero > 0){
			countMayor++;
		} else if(numero < 0){
			countMenor++;
		}
	}
	
	printf("Numeros ingresados mayores a cero: %d.\n", countMayor);
    printf("Numeros ingresados menores a cero: %d.\n", countMenor);
    
}
