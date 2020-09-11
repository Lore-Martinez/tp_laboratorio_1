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


	int opción; // Variable del menú

	// Variables para el ingreso de datos
	float número1;
	float número2;

   // Variables para iniciar las operaciones
	float suma;
	float resta;
	float división;
	float multiplicación;
	float factorial;

	// Variables para capturar el resultado que devuelve la función

	float resultadoSuma;
	float resultadoResta;
	float resultadoDivisión;
	float resultadoMultiplicación;
	float resultadoFactorial;


	do
	    {
	        printf("1. Cargar\n2. Mostrar\n3. Eliminar\n4.Salir\n");
	        printf("Elija una opcion: ");
	        scanf("%d", &opción);
	        switch(opción)
	        {
	            case 1:
	                printf("\nEstoy cargando...\n");
	            break;
	            case 2:
	                printf("Estoy mostrando...\n");
	            break;
	            case 3:
	                printf("\nEstoy eliminando...\n");
	            break;
	            case 4:
	                printf("\nGracias por usar el programa...\n");
	            break;

	        }




	    }while(opción!=4);



























	return EXIT_SUCCESS;
}

// Funciones para mi calculadora

int Sumar(float número1, float número2) // prototipo de la función sumar

{
	float resultado;

	resultado = número1 + número2;

	return resultado;
}


