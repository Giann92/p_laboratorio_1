#include "Biblioteca.h"
float IngresarNumero(char mensaje[]) {
	float numero;

	printf("%s", mensaje);
	scanf("%f", &numero);

	return numero;
}

float Suma(float x, float y) {

	float respuesta;
	respuesta = x + y;
	printf("El resulado de A + B es = %.2f \n" , respuesta);

	return respuesta;
}

float Resta(float x, float y) {
	float respuesta;

	respuesta = x - y;
	printf("El resulado de A - B es = %.2f \n" , respuesta);
	return respuesta;
}
float Division(float x, float y) {
	float respuesta;

	if (y != 0) {
		respuesta = x / y;
		printf("El resulado de A / B es = %.2f \n" , respuesta);
	}
	else
	{
		printf("No se puede divir por cero \n");
	}

	return respuesta;
}
float Multiplicacion(float x, float y) {
	float respuesta;

	respuesta = x * y;
	printf("El resulado de A * B es = %.2f \n" , respuesta);
	return respuesta;
}
float FactorialA(float x) {

	int factorial;
	int i;
	int j;

	j = (int) x;

	factorial = 1;
	for (i = 1; i <= j; i++) {
		factorial = factorial * i;
	}
	printf("El factorial de A es = %d \n" , factorial);
	return factorial;
}
float FactorialB(float y) {

	int factorial;
	int i;
	int l;

	l = (int) y;
	factorial = 1;

	for (i = 1; i <= l; i++) {
		factorial = factorial * i;
	}
	printf("El factorial de B es = %d \n" , factorial);
	return factorial;
}
