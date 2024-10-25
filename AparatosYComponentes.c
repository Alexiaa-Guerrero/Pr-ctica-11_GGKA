/*Karla Alexia Guerrero González
Práctica 8 04/10/24
Tablas de multiplicar*/

#include <stdio.h>
#include <stdlib.h>

void llenar(arr[10][100])
{
  int i, j, num2

  for(i=0; i<10; i++)
  {
    printf("Dame la cantidad: ");
    scanf("%d", &num);

    for(j=0; j<num; j++)
    {
      printf("Dame el número de componente (0-99): ");
      scanf("%d", &num2);
      arr[i][num2] = 1;
    }
  }
      

  
