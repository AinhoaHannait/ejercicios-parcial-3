#include <stdio.h>

//serie fibonacci con función resursiva 

unsigned long long int fibo(unsigned long long int i)
{
	if (i<2)
	{
		return i;
	}
	else
	{
		return fibo(i-1) + fibo(i-2);
	}
}

int main()
{
	int n, i;
	
	printf("Hasta que numero deseas llegar?");
	scanf("%d", &n);
	
	for (i=0; i<=n; i++)
	{
		printf ("%llu ", fibo(i));
	}

	return 0;
}
