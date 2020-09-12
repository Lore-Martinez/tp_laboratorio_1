/*
 ============================================================================
 Name        : trabajoPráctico_1.c
 Author      : Lorena Martínez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {


	int opcion; // Variable del menú

	// Variables para el ingreso de datos
	int numero1;
	int numero2;

   /* Variables para iniciar las operaciones
	int suma;
	int resta;
	int división;
	int multiplicación;
	int factorial;

	// Variables para capturar el resultado que devuelve la función

	float resultadoSuma;
	float resultadoResta;
	float resultadoDivisión;
	float resultadoMultiplicación;
	float resultadoFactorial;*/


	do
	    {
	        printf("1. Cargar números\n2. Mostrar resultado \n3. Eliminar números\n4.Salir\n");
	        printf("Elija una opcion: ");
	        scanf("%d", &opcion);
	        switch(opcion)
	        {
	            case 1:
	            	printf("Ingrese un número: ");
	            	scanf("%d", & numero1);
	            	printf("\nEstoy cargando...\n ");
	            	printf("\nEl primer operador es: %d \n", numero1);

	            	printf("Ingrese otro número: ");
	            	scanf("%d", & numero2);
	            	printf("\nEstoy cargando...\n ");
	            	printf("El segundo operador es: %d \n", numero2);


	            break;
	            case 2:
	                printf("\nEstoy mostrando...\n ");





	            break;
	            case 3:
	                printf("\nEstoy eliminando...\n");
	            break;
	            case 4:
	                printf("\nGracias por usar el programa...\n");
	            break;

	        }

	       // resultadoSuma = Sumar(num1;num2);







	    }while(opcion!=4);



























	return EXIT_SUCCESS;
}

/* Funciones para mi calculadora

int Sumar(int numero1, int numero2) // prototipo de la función sumar

{
	float resultado;

	resultado =  (float) numero1 + numero2;

	return resultado;
}

int Restar(int numero1, int numero2) // prototipo función restar
{
	float resultado;

	resultado =(float) numero1 + numero2;

	return resultado; // qué devuelve la función

}

int Multiplicar(int numero1, int numero2)

{
	float resultado;

	resultado = (float) numero1 + numero2;

	return resultado;

}

int Dividir(int numero1, int numero2)
{
	float resultado;

	resultado = (float) numero1 + numero2;

	return resultado;

}




*/


