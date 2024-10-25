/*Karla Alexia Guerrero González
Práctica 11 25/10/24
Programa 1 de la práctica 11*/

#include <stdio.h>
#include <string.h>
// Prototipo o firma de las funciones del programa
void imprimir(char[]);
// Definición o implementación de la función main
int main (){
  char nombre[] = "Facultad de Ingeniería";
  imprimir(nombre);
}
// Implementación de las funciones del programa
void imprimir(char s[]){
  int tam;
  for ( tam=strlen(s)-1 ; tam>=0 ; tam--)
  printf("%c", s[tam]);
  printf("\n");
}
