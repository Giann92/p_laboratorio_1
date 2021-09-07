/*
 ============================================================================
 Name        : Calculadora.c
 Author      : Desumma Gian Franco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);
	float x;
	float y;
	int opcion;
	char j = 'x';
	char z = 'y';

	x = (float) j;
	y =(float) z;

	do
	{	printf("-------------------------------------\n");
		printf("	  MENU \n");
			if(x == j){

		printf("1. Ingresar 1er operando (A = %c)\n" , j);
			} else{
		printf("1. Ingresar 1er operando (A = %.2f)\n", x);
			}
			if(y == z)
			{
		printf("2. Ingresar 2do operando (B = %c)\n" , z);

			}else{
		printf("2. Ingresar 2do operando (B = %.2f)\n" , y);
			}
		printf("3. Calcular todas las operaciones\n");
		printf("4. Informar resultados\n");
		printf("5. Salir\n");
		printf("--------------------------------------\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)//int - char
		{
			case 1:

				x = IngresarNumero("A = ");
				printf("A = %.2f\n",x);

			break;
			case 2:
				y = IngresarNumero("B = ");
					printf("B  = %.2f\n",y);
			break;
			case 3:
				printf("a) calcular la suma ( %.2f + %.2f)\n", x , y );
				printf("a) calcular la resta ( %.2f - %.2f)\n", x , y );
				printf("a) calcular la division ( %.2f / %.2f)\n", x , y );
				printf("a) calcular la multiplicacion ( %.2f * %.2f)\n", x , y );
				printf("a) calcular el factorial ( %.2f! y %.2f!)\n", x , y );
			break;
			case 4:
				 Suma( x, y);
				 Resta( x, y);
				 Division( x, y);
				 Multiplicacion( x, y);
				 FactorialA(x);
				 FactorialB(y);

			break;
			case 5:
				printf("Hasta la proxima\n");
			break;
		}

	}while(opcion!=5);

	return EXIT_SUCCESS;
}
