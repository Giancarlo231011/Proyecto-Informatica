#include <stdio.h>
main(){

float area, precio, descuento, total;

printf("Ingresa el area del terreno en metros cuadrados:");
scanf("%f",&area);

precio = area * 900;

if(area > 1000){
descuento = precio * 0.15;
}else{
if(area > 500){
descuento = precio * 0.10;
}else{
descuento = 0;
}
}

total = precio - descuento;

printf("\nPrecio original: $%.2f",precio);
printf("\nDescuento: $%.2f",descuento);
printf("\nTotal a pagar: $%.2f",total);

}
