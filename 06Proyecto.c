#include <stdio.h>
main(){

float radio, altura;
float area, volumen, litros;
float pi = 3.1416;

printf("Ingresa el radio del cilindro:");
scanf("%f",&radio);

printf("Ingresa la altura del cilindro:");
scanf("%f",&altura);

area = 2 * pi * radio * (radio + altura);
volumen = pi * radio * radio * altura;
litros = volumen / 1000;

printf("\nArea total: %.2f cm cuadrados",area);
printf("\nVolumen: %.2f cm cubicos",volumen);
printf("\nCapacidad: %.2f litros",litros);

}
