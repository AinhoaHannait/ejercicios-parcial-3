#include <stdio.h>

int main() 
{

  int matriz[3][3];
  int i, j;
  int dp=0, ds=0, sumf1=0, sumf2=0, sumf3=0, sumc1=0, sumc2=0, sumc3=0, sumaMagica=0;


  for (i = 0; i < 3; i++) 
  {
    for (j = 0; j < 3; j++) 
	{
      printf("Ingrese el valor de la posicion [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  
  printf("\n\n");
  
  for (i = 0; i < 3; i++) 
	  {
	    for (j = 0; j < 3; j++)
		{
			printf("%d ", matriz[i][j]);
		}
	    printf("\n");
	  }
	printf("\n\n");

  
  for (i = 0; i < 3; i++) 
  {
    sumc1 += matriz[i][0];
    sumc2+= matriz[i][1];
    sumc3 += matriz[i][2];
  }

 
  for (i = 0; i < 3; i++) 
  {
    sumf1 += matriz[0][i];
    sumf2 += matriz[1][i];
    sumf3 += matriz[2][i];
  }


  for (i = 0; i < 3; i++) 
  {
    dp += matriz[i][i];
  }

 
  for (i = 0; i < 3; i++) 
  {
    ds += matriz[i][2 - i];
  }


  printf("\n");
  printf("Suma de columna 1 es: %d\n"
  "Suma de la columna 2 es: %d\n"
  "Suma de la columna 3 es: %d\n", sumc1,sumc2,sumc3);
  printf("Suma de la fila 1 es: %d\n"
  "Suma de la fila 2 es: %d\n"
  "Suma de la fila 3 es: %d\n", sumf1,sumf2,sumf3);
  printf("Suma de la diagonal principal: %d\n", dp);
  printf("Suma de la diagonal secundaria: %d\n", ds);
  
  printf("\n\n");
  
  if (sumc1 != sumc2 || sumc1 != sumc3 ||
      sumf1 != sumf2 || sumf1 != sumf3 ||
      dp!= ds)
	 {
   		 sumaMagica = -1;
 	 }
	else
	{
		sumaMagica=1;
	}


  if (sumaMagica == 1 ) 
  {
    printf("La matriz es magica\n");
  } 
  else 
  {
    printf("La matriz no es magica\n");
  }


  return 0;
}
