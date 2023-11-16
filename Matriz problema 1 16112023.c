#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
 
	 int matriz[5][7];
	 int i, j;
	 int dp=0, sumpf=0, sumuc=0, sumfp=0, sumci=0, sumts=0, sumti=0;
	 
	 srand(time(NULL));
	 
	 for (i=0; i<5; i++)
	 {
	 	for (j = 0; j < 7; j++)
	 	{
	 		matriz[i][j] =  rand() % (9 +1 -0);
		}
	 }
	  
	  for (i = 0; i < 5; i++) 
	  {
	    for (j = 0; j < 7; j++)
		{
			printf("%d ", matriz[i][j]);
		}
	    printf("\n");
	  }
	printf("\n\n");
	 
	  for (i = 0; i < 5; i++) //diagonal principal
	  {
	  	 dp += matriz[i][i];
	  }
	   
	 
	  for (j = 0; j < 7; j++) // Suma primera fila
	  {
	    sumpf+= matriz[0][j];
	  }
	
	
	  for (i = 0; i < 5; i++) //Suma ultima columna
	  {
	    sumuc+= matriz[i][6];
	  }
	
	
	  for (i = 0; i < 5; i++) //Suma filas pares
	  {
	    if (i % 2 == 0) 
		{
	      for (j = 0; j < 7; j++) 
		  {
	        sumfp += matriz[i][j];
	      }
	    }
	  }
	
	
	  for (j = 0; j < 7; j++) //Suma columnas impares
	  {
	    if (j % 2 == 1) 
		{
	      for (i = 0; i < 5; i++) 
		  {
	        sumci += matriz[i][j];
	      }
	    }
	  }
	
	 
	  for (i = 0; i < 5; i++) //Suma triagular superior y diagonal
	  {
	    for (j = 0; j <= i; j++) 
		{
	      sumts+= matriz[i][j];
	    }
	  }
	
	
	  for (i = 0; i < 5; i++) //Suma triangular inferior y diagonal
	  {
	    for (j = i; j < 7; j++) 
		{
	      sumti += matriz[i][j];
	    }
	  }
	
	
	  printf("La suma de la diagonal principal es: %d\n", dp);
	  printf("La suma de la primera fila es: %d\n", sumpf);
	  printf("La suma de la ultima columna es: %d\n", sumuc);
	  printf("La suma de las filas pares es: %d\n", sumfp);
	  printf("La suma de las columnas impares es: %d\n", sumci);
	  printf("La suma del triangular superior y la diagonal principal es: %d\n", sumts);
	  printf("La suma del triangular inferior y la diagonal principal es: %d\n", sumti);
	  printf("Sume la triangular superior con la diagonal principal");
	  
	  printf("\n\nEspero haber sido de ayuda:)");
	
	  return 0;
}
