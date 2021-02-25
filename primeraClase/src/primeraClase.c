/*
 ============================================================================
 Name        : primeraClase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
	Tipos de datos en C:

	- Int (entero): Se utiliza para numeros enteros
	- Float (flotante): Se utiliza para numeros decimales.
	- Double (doble): Se utiliza tambien para decimales con mayor precision.
	- Char : Se utiliza para un caracter.

	Variables

	TIPO NOMBRE=VALOR;

	Salida de datos

	Se utiliza la funcion printf
	printf ("Introduccion a lenguaje C");

	Modificadores de formato
	Son simbolos que van a remplazar a un valor en el momento en que se imprime
	el mensaje.

	Modificadores
	%d ---> Imprime un numero entero
	%f ---> Imprime un numero decimal
	%c ---> Imprime un caracter
	%s ---> Imprime un array de caracteres

	printf("El resultado es: %d", resultado);

	En el ejemplo, el signo %d se remplazara por el valor de la variable
	"resultado".

	Si queremos imprimir el valor de mas de una variable, se deberan pasar como
	argumento a la funcion printf en el mismo orden a ser remplazadas.

	printf("Juan mide %f- y pesa %f ", altura, peso);

	---------------------------------------------------------------------------
	Define

	Es una palabra que se intercambia por otra cosa, generalmente van en
	mayusculas

	#define MENSAJE "hola mundo"
	--------------------------------------------------------------------------
	Entrada de datos

	scanf ("%d", &)

	A scanf se le pasa el modificador de datos, tiene que coincidir con el dato
	a ingresar, tiene que coincidir con el tipo de variable donde voy a dejar ese
	valor, ademas debo pasarle la direccion de memoria de la variable donde quiero
	guardar lo ingresado, se utiliza el & acompañado del nombrede la variable. Le
	permite escribir dentro de la variable

	  */

	float altura = 1.69;
	float peso= 65.8;

	printf("La altura de Max es %f y el peso es %f kilos\n",altura,peso);

	printf("\nYa es hora del recreo\n");

	int edad;

	printf ("\nIngrese su edad: \n");
	scanf ("%d",&edad);
	printf ("\nUsted tiene %d años \n",edad);

	//Ejercicio 1
	// Pedir dos numeros e imprimir la suma, la resta, la division y la multiplicacion

	int num1;
	int num2;
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	float resultadoDivision;
	int i=0;
	int acumulador=0;
	float promedio;
	float numero1;
	float numero2;
	float resultadoRestaa;
	int positivos=0;
	int negativos=0;

	printf ("\nIngrese el primer numero: \n");
	scanf ("%d",&num1);
	printf ("\nIngrese el segundo numero: \n");
	scanf ("%d",&num2);

	resultadoSuma= num1+num2;
	resultadoResta= num1-num2;
	resultadoMultiplicacion= num1*num2;
	resultadoDivision= (float)num1/num2;

	printf ("\n La suma de numero uno (%d) y numero dos (%d) es %d. \n", num1, num2,resultadoSuma);
	printf ("\n La resta de numero uno (%d) y numero dos (%d) es %d. \n", num1, num2,resultadoResta);
	printf ("\n La multiplicacion de numero uno (%d) y numero dos (%d) es %d. \n", num1, num2,resultadoMultiplicacion);
	printf ("\n La division de numero uno (%d) y numero dos (%d) es %f \n", num1, num2,resultadoDivision);



	do
	{
		printf("\nIngrese un primer numero: \n");
		scanf("%d",&num1);



		i++;
		acumulador+=num1;

	}while (i<5);

	promedio = (float)acumulador/i;

	printf ("\nEl total es: %d, y el promedio es %f", acumulador,promedio);

	/*Solicite dos valores numéricos al usuario distintos de cero *
	    - Asigne a las variables numero1 y numero2 los valores obtenidos
	    - Realice la resta de dichas variables
	    - Muestre el resultado por pantalla
	    - Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor *
	    - Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero *
	 */


	printf("\nPor favor, seleccione un numero mayor a 0\n");
	scanf("%f",&numero1);
	printf("\nPor favor, seleccione nuevamente un numero mayor a 0\n");
	scanf("%f",&numero2);

	resultadoRestaa=numero1-numero2;

	printf("\nEl resultado de la operacion es: %f\n",resultadoRestaa);

	if(resultadoRestaa>-1)
	{
		printf("\nResultado positivo\n");
	}
	else
	{
		printf("\nResultado negativo\n");
	}

	/*

	- Solicite al usuario 10 números
    - Calcule cuántos son negativos y cuantos son positivos
    - Muestre por pantalla la cantidad de negativos y la cantidad de positivos

	*/

	i=0;
	do
	{
		printf("\nIngrese un numero: \n");
		scanf("%d",&num1);

		if(num1>-1)
		{
			positivos++;
		}
		else
		{
			negativos++;
		}
		i++;

	}while (i<10);

	printf("\nLa cantidad de numeros positivos son: %d.\n",positivos);
	printf("\nLa cantidad de numeros negativos son: %d.\n",negativos);

}
