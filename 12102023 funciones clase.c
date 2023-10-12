/*#include <stdio.h>

int suma(int a, int b)
{
	return( a + b);
}

int main ()
{
	printf("La suma es: %d\n", suma (5,8));
	printf("La suma es: %d", suma (646,32));
	return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio (int max, int min)
{
	return (rand()%(max +1 -min)+min);
}

int main ()
{
	srand(time(NULL));
	printf("Aleatorio: %d", aleatorio (10, 1));
	int x, lista [10];
	for (x=0; x<10; x++)
			lista[x]=aleatorio(9,1);
	printf("\n");
	for(x=0; x<10; x++)
		printf("%d", lista [x]);
}*/
/*
#include <stdio.h>

void imprimir ()
{
	int x;
	for (x=0; x<10; x++)
		printf("%d\n", x);
}

int main()
{
	imprimir ();
	imprimir ();
	return 0; 
}*/
/*
#include <stdio.h>

int sum(int a, int b)
{
	int resultado = a + b;
	return (resultado);
}

float prom(int a, int b)
{
	return ((a+b)/2.0);
}

int main ()
{
	printf("Res: %f\n", prom(sum(1,2), sum(2,3)));
	printf("Res: %f\n", prom(sum(5,6), sum(7,8)));
	printf("Res: %f\n", prom(sum(9,10), sum(11,12)));
	
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>

void imprimir(int a, char texto[4])
{
	int x, y;
	for (x=0; x<a; x++)
	{
		for(y=0; y<strlen(texto); y++)
		{
			printf(" %c ", texto[y]);
		}
		printf("\n");
	}
	printf("\n");
}

int main ()
{
	char cadena []= "hola";
	char cadena2 [] = "mundo";
	imprimir(5, cadena);
	imprimir(4, cadena2);
	
	return 0;
}*/
/*
#include <stdio.h>

void impresion (int n)
{
	int i; 
	for (i=1; i<=n; i++)
		printf("*");
	printf ("\n");
}

int main ()
{
	int a = 10;
	impresion (20);
	impresion (a);
	impresion (a+2);
	
	return 0;
}*/
/*
#include <stdio.h>

int ChecarNumerosPrimos(int n);

int main ()
{
	int n1, n2, i, bandera;
	printf("Ingresa dos numeros:");
	scanf("%d %d", &n1, &n2);
	printf ("Primos entre %d y %d son:\n", n1, n2);
	for (i=n1+1; i<n2; ++i)
	{
		// si i es primo la funcion regresara a uno
		bandera = ChecarNumerosPrimos (i);
		if (bandera == 1)
			printf("%d \n", i);
	}
	return 0;
}

int ChecarNumerosPrimos(int n)
{
	int j;
	for (j=2; j<= n/2; j++)
	{
		if (n%j == 0)
		{
			return 0;
		}
	}
	return 1;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void raiz (float numero);

int main ()
{
	float dato = 0.0;
	raiz (9);
	raiz(-144);
	printf("Dato para calcular raiz: ");
	scanf("%f", &dato);
	raiz (dato);
	return 0;
}

void raiz (float numero)
{
	float resultado= 0.0;
	//obtener el valor absoluto
	numero = abs(numero);
	//obtener la rais cuadrada
	resultado = sqrt (numero); //sqrt raiz
	printf("Raiz %f\n", resultado);
	
	
}
