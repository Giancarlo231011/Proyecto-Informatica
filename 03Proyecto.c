#include <stdio.h>
main(){

float centimetros, pies, pulgadas, resto;

printf("Ingresa la longitud en centimetros:");
scanf("%f",&centimetros);

pies = centimetros / 30.48;
resto = centimetros - ((int)pies * 30.48);
pies = (int)pies;

pulgadas = resto / 2.54;

printf("\nPies: %.0f",pies);
printf("\nPulgadas: %.2f",pulgadas);

}
