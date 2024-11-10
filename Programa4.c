/*Karla Alexia Guerrero González
Práctica 11 25/10/24
Programa 4 correspondiente a la práctica*/



#include <stdio.h>
#include<stdio.h>
void incremento();

int enteraGlobal;
int main()
{

 int cont;
 enteraGlobal = 0;
 for (cont=0 ; cont<5 ; cont++)
 {
 incremento();
 }

 return 999;
}
void incremento()
{

 int enteraLocal = 5;
 enteraGlobal += 2;
 printf("global(%i) + local(%i) = %d\n",enteraGlobal, enteraLocal, enteraGlobal+enteraLocal);
 return 0;
}
