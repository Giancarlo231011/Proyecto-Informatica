#include <stdio.h>
main(){

float largo, ancho, precio;
float subtotal, iva, total;

printf("Ingresa el largo del terreno:");
scanf("%f",&largo);

printf("Ingresa el ancho del terreno:");
scanf("%f",&ancho);

printf("Ingresa el precio por metro cuadrado:");
scanf("%f",&precio);

subtotal = largo * ancho * precio;
iva = subtotal * 0.16;
total = subtotal + iva;

printf("\nSubtotal: $%.2f",subtotal);
printf("\nIVA: $%.2f",iva);
printf("\nTotal: $%.2f",total);

}
