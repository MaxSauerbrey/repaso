/*
 ============================================================================
 Name        : terceraClase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sumarConLimite(int operador1, int operador2);


int main(void) {

//FUNCIONES
//Permite abstraer el codigo, dando niveles, permite simplificar el codigo y
// reutilizarlo, permite colocar datos de entrada diferente pero que el programa
// haga siempre la misma fun  cion, es mas facil de mantener, si hay un error en la
//funcion se corrije solo una vez

	int num1;
	int num2;
	int resultado;

	printf ("\nIngrese el primer numero a sumar\n");
	scanf ("%d",&num1);

	printf ("\nIngrese el segundo numero a sumar\n");
	scanf ("%d",&num2);

	resultado= sumarConLimite(num1,num2);

	printf("\nEl resultado es:%d\n",resultado);

	return EXIT_SUCCESS;
}


//funciones aux en mi programa
//definicion de mi funcion sumarConLimite


// TIPO	 NOMBRE DE LA FUNCION (void)---> vacio
// TIPO	 NOMBRE DE LA FUNCION (TIPO NOMBRE ARG, ...)
int sumarConLimite(int operador1, int operador2) //prototipo
{
	//codigo de la funcion

	int resultado; /* variable local ---> se definen adentro de una funcion, su valor
				  	  solo se mantiene dentro de la funcion donde fue declarada,
				  	  cuando salis de la funcion las variables locales no existen mas. */

	resultado= operador1+operador2;

	if (resultado>100)
	{
		resultado=100;
	}

	//retornar valor


	return resultado;

}
