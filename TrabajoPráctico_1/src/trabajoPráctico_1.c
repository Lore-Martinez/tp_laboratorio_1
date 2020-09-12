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
#include "OperacionesAritmeticas.h"

int main(void) {


	int opcion;


	do
	    {
			printf("\nCalculadora UTN \n");
	        printf("1. Cargar primer operando\n2. Cargar segundo operando \n3. Realizar operaciones\n4.Mostrar resultados\n5. Salir\n");
	        printf("Elija una opcion: ");
	        scanf("%d", &opcion);
	        switch(opcion)
	        {
	            case 1:
	            	printf("\nEl operando ingresado es...\n");

	            break;
	            case 2:
	                printf("\nEl segundo operando ingresado es...	\n");

	            break;
	            case 3:
	                printf("\nEstoy realizando las operaciones...\n");
	            break;
	            case 4:
	                printf("\nEl resultado es: \n");
	            break;
	            case 5:
	            	printf("\nGracias por utilizar este programa el programa.\n");

	        }

	    }while(opcion!=5);



	return EXIT_SUCCESS;
}

















