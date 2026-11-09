#include <stdio.h>
#include <math.h>
main(){

float lado1, lado2, lado3, aux;

printf("Ingresa el primer lado:");
scanf("%f",&lado1);

printf("Ingresa el segundo lado:");
scanf("%f",&lado2);

printf("Ingresa el tercer lado:");
scanf("%f",&lado3);

if(lado1 > 0 && lado2 > 0 && lado3 > 0 &&
lado1 + lado2 > lado3 &&
lado1 + lado3 > lado2 &&
lado2 + lado3 > lado1){

printf("\nEl triangulo si puede formarse");

if(lado1 == lado2 && lado2 == lado3){
printf("\nEs equilatero");
}else{
if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
printf("\nEs isosceles");
}else{
printf("\nEs escaleno");
}
}

// Ordenar los lados de menor a mayor

if(lado1 > lado2){
aux = lado1;
lado1 = lado2;
lado2 = aux;
}

if(lado2 > lado3){
aux = lado2;
lado2 = lado3;
lado3 = aux;
}

if(lado1 > lado2){
aux = lado1;
lado1 = lado2;
lado2 = aux;
}

// Clasificar por sus angulos

if(lado1 * lado1 + lado2 * lado2 == lado3 * lado3){
printf("\nEs rectangulo");
}else{
if(lado1 * lado1 + lado2 * lado2 > lado3 * lado3){
printf("\nEs acutangulo");
}else{
printf("\nEs obtusangulo");
}
}

}else{

printf("\nError: Los lados no forman un triangulo");

}

}
