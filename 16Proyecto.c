#include <stdio.h>
main(){

float numero1, numero2, numero3, aux;

printf("Ingresa el primer numero:");
scanf("%f",&numero1);

printf("Ingresa el segundo numero:");
scanf("%f",&numero2);

printf("Ingresa el tercer numero:");
scanf("%f",&numero3);

if(numero1 > numero2){
aux = numero1;
numero1 = numero2;
numero2 = aux;
}

if(numero2 > numero3){
aux = numero2;
numero2 = numero3;
numero3 = aux;
}

if(numero1 > numero2){
aux = numero1;
numero1 = numero2;
numero2 = aux;
}

printf("\nNumeros de menor a mayor:");
printf("\n%.2f",numero1);
printf("\n%.2f",numero2);
printf("\n%.2f",numero3);

}
