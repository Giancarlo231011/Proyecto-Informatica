#include <stdio.h>
main(){

char nombre[30];
char apellido[30];
int nacimiento, actual, edad;

printf("Ingresa tu nombre:");
scanf("%s",nombre);

printf("Ingresa tu apellido:");
scanf("%s",apellido);

printf("Ingresa tu año de nacimiento:");
scanf("%d",&nacimiento);

printf("Ingresa el año actual:");
scanf("%d",&actual);

edad = actual - nacimiento;

printf("\nNombre: %s, %s",apellido,nombre);
printf("\nEdad: %d años",edad);

}
