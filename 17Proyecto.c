#include <stdio.h>
main(){

int dia;

printf("Ingresa un numero del 1 al 7:");
scanf("%d",&dia);

switch(dia){

case 1:
printf("\nLUNES");
printf("\nDia laboral");
break;

case 2:
printf("\nMARTES");
printf("\nDia laboral");
break;

case 3:
printf("\nMIERCOLES");
printf("\nDia laboral");
break;

case 4:
printf("\nJUEVES");
printf("\nDia laboral");
break;

case 5:
printf("\nVIERNES");
printf("\nDia laboral");
break;

case 6:
printf("\nSABADO");
printf("\nFin de semana");
break;

case 7:
printf("\nDOMINGO");
printf("\nFin de semana");
break;

default:
printf("\nError de opcion");

}

}
