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

	float operando1;
	float operando2;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
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
	            	printf("\nIngrese el primer operando: \n");
	            	scanf("%f", &operando1);

	            	printf("\nEl primer operando ingresado es %f \n", operando1);

	            break;
	            case 2:
	            	printf("\nIngrese el segundo operando: \n");
	            	scanf("%f", &operando2);

	            	printf("\nEl segundo operando ingresado es: %f \n", operando2);

	            break;
	            case 3:

	            	 printf("\nRealizando las operaciones...\n");

	            break;
	            case 4:

	            	resultadoSuma = Sumar(operando1, operando2);
	            	resultadoResta = Restar(operando1, operando2);
	            	resultadoMultiplicacion = Multiplicar(operando1, operando2);
	            	resultadoDivision  = Dividir(operando1, operando2);


	                printf("\nEl resultado es: %f \n", resultadoSuma);
	                printf("\nEl resultado es: %f \n", resultadoResta);
	                printf("\nEl resultado es: %f \n", resultadoMultiplicacion);
	                printf("\nEl resultado es: %f \n", resultadoDivision);

	            break;
	            case 5:
	            	printf("\nGracias por utilizar este programa.\n");

	        }

	    }while(opcion!=5);



	return EXIT_SUCCESS;
}

















