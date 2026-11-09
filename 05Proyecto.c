#include <stdio.h>
main(){

int costo, dinero, cambio;
int b500, b200, b100, b50, b20;
int m10, m5, m2, m1;

printf("Ingresa el costo de la compra:");
scanf("%d",&costo);

printf("Ingresa el dinero entregado:");
scanf("%d",&dinero);

cambio = dinero - costo;

printf("\nCambio: $%d",cambio);

b500 = cambio / 500;
cambio = cambio % 500;

b200 = cambio / 200;
cambio = cambio % 200;

b100 = cambio / 100;
cambio = cambio % 100;

b50 = cambio / 50;
cambio = cambio % 50;

b20 = cambio / 20;
cambio = cambio % 20;

m10 = cambio / 10;
cambio = cambio % 10;

m5 = cambio / 5;
cambio = cambio % 5;

m2 = cambio / 2;
cambio = cambio % 2;

m1 = cambio;

printf("\nBilletes de 500: %d",b500);
printf("\nBilletes de 200: %d",b200);
printf("\nBilletes de 100: %d",b100);
printf("\nBilletes de 50: %d",b50);
printf("\nBilletes de 20: %d",b20);
printf("\nMonedas de 10: %d",m10);
printf("\nMonedas de 5: %d",m5);
printf("\nMonedas de 2: %d",m2);
printf("\nMonedas de 1: %d",m1);

}
