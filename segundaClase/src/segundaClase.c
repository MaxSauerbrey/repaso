/*
 ============================================================================
 Name        : segundaClase.c
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
	/* CHANGE
	//Pedir 5 numeros y dar como resultado maximo y minimo

	int maximo;
	int minimo;
	int i;
	int bufferInt;
	int flag=0;


	for(i=0;i<5;i++)
	{

		printf ("\nPor favor, ingrese un numero:\n");
		scanf("%d",&bufferInt);

		if(flag == 0 )
		{
			minimo=bufferInt;
			maximo=bufferInt;
			flag =1;
		}
		else
		{
			if(bufferInt>maximo )
			{
				maximo=bufferInt;
			}
			if(bufferInt<minimo)
			{
				minimo=bufferInt;
			}
		}

	}

	printf("\nEl numero maximo es: %d", maximo);
	printf("\nEl numero minimo es: %d", minimo);

*/

//----------------------------------
// Mismo ejercicio pero sin flag
//Pedir 5 numeros y dar como resultado maximo y minimo
/*
int max;
int min;
int buffer;
int o;

for (o=0;o<5;o++)
{

	printf ("\nIngrese un numero cualquiera:\n");
	scanf("%d", &buffer);
	printf("\nNumero %d grabado\n.", o+1);

	if(o==0)
	{
		max=buffer;
		min=buffer;

	}
	else
	{
		if(buffer>max)
		{
			max=buffer;
		}

		if(buffer<min)
		{
			min=buffer;
		}
	}
}

printf("\nEl mayor numero ingresado fue:%d.", max);
printf("\nEl menor numero ingresado fue:%d.", min);
*/

// Segundo ejercicio
//Pedir numeros hasta que el USUARIO quiera (888) y dar como resultado maximo y minimo

/*
int buffer;
int max;
int min;
int flag=0;



do{
printf("\nIngrese el numero deseado(si quiere dejar de ingresar numeros seleccione la opcion 888).\n");
scanf ("%d",&buffer);

	if(buffer == 888)
	{
		break;
	}

	if(flag==0)
	{
		max=buffer;
		min=buffer;
		flag=1;
	}
	else
	{
		if(buffer>max)
		{
			max=buffer;
		}
		if(buffer<min)
		{
			min=buffer;
		}
	}
}while(buffer != 888);

printf("\nUsted ha salido del programa");
printf("\nEl mayor numero de los que ha ingresado es: %d.",max);
printf("\nEl menor numero de los que ha ingresado es: %d.",min);
*/


//-----------------------
//Otra forma de resolver el ejercicio 2
/*
int buffer;
int max;
int min;
int flag=0;

while(1)
{
	if(flag ==0)

	{

		printf ("\nBienvenido, Ingrese un numero. Para salir del programa, ingrese el numero 888\n");
		scanf("%d",&buffer);
	}
	else
	{
		printf ("\nIngrese un numero. Para salir del programa, ingrese el numero 888\n");
		scanf("%d",&buffer);
	}

			if(buffer == 888)
			{
				break;
			}

			if(flag==0)
			{
				max=buffer;
				min=buffer;
				flag=1;
			}
			else
			{
				if(buffer>max)
				{
					max=buffer;
				}
				if(buffer<min)
				{
					min=buffer;
				}
			}


}

printf("\nUsted ha salido del programa.");
printf("\nEl mayor numero de los que ha ingresado es: %d.",max);
printf("\nEl menor numero de los que ha ingresado es: %d.",min);
*/
/*
 Solicitar al usuario que ingrese una serie de numeros la cual finaliza al introducir el 999 (el 999
 no debe ser tenido en cuenta para dicho calculo). Una vez finalizado el ingreso de numeros
 el programa debera mostrar el promedio de dichos numeros por la pantalla.
 */

int buffer;
int contador=0; // El contador tiene que estar inicializado en 0.
int acumulador=0; //El acumulador siempre tiene que estar inicializado en 0.
float promedio;

 while(1)// while (1) el bucle se ejecuta todo el tiempo, ante alguna condicion le puedo poner un break
 {
	printf("\nIngrese un numero:\n(Si quiere dejar de ingresar numeros, ingrese el numero 999)\n");
	scanf("%d",&buffer); // El dato ingresado lo tengo que dejar en la variable buffer, scanf requiere
	//poder modificar el contenido de la variable buffer, la variable buffer esta declarada en el main
	// y scanf es otra funcion, debo pasarle la direccion de memoria de la variable buffer asi scanf la puede
	//modificar, por lo tanto se debe colocar &

	/*
	if(buffer == 999)
	{
		break;
	}
	else
	{
	acumulador= acumulador + buffer;
	contador++;
	}
	*/
	if(buffer != 999)
	{
		acumulador+= buffer;
		contador++;
	}
	else
	{
		break;
	}
 }

 promedio=(float)acumulador/contador;
//Si es un promedio siempre se tiene que castear una de las dos variables
 printf("\nEl programa ha concluido.\n");
 printf("\nEl promedio de los numeros ingresados es %f.",promedio);



return EXIT_SUCCESS;




}


