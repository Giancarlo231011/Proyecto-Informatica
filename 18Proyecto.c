#include <stdio.h>
main(){

int mes, año, dias;

printf("Ingresa el numero del mes:");
scanf("%d",&mes);

printf("Ingresa el año:");
scanf("%d",&año);

switch(mes){

case 1:
printf("\nEnero");
dias = 31;
break;

case 2:
printf("\nFebrero");

if(año % 400 == 0 || (año % 4 == 0 && año % 100 != 0)){
dias = 29;
}else{
dias = 28;
}
break;

case 3:
printf("\nMarzo");
dias = 31;
break;

case 4:
printf("\nAbril");
dias = 30;
break;

case 5:
printf("\nMayo");
dias = 31;
break;

case 6:
printf("\nJunio");
dias = 30;
break;

case 7:
printf("\nJulio");
dias = 31;
break;

case 8:
printf("\nAgosto");
dias = 31;
break;

case 9:
printf("\nSeptiembre");
dias = 30;
break;

case 10:
printf("\nOctubre");
dias = 31;
break;

case 11:
printf("\nNoviembre");
dias = 30;
break;

case 12:
printf("\nDiciembre");
dias = 31;
break;

default:
printf("\nError de opcion");
dias = 0;

}

if(dias != 0){
printf("\nCantidad de dias: %d",dias);
}

}
