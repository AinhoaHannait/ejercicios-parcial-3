#include <stdio.h>

int suma(int, int);

int main()
{
	int num1, num2, sum;
	printf("Introducir dos numeros a sumar \n");
	scanf ("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("La suma es: %d", sum);
	return 0;
}

int suma(int a, int b)
{
	int add;
	add = a + b;
	return add;
}
