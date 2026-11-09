#include <stdio.h>
#include <math.h>
main(){

float a, b, c;
float discriminante;
float x1, x2;
float parteReal, parteImaginaria;

printf("Ingresa el valor de a:");
scanf("%f",&a);

printf("Ingresa el valor de b:");
scanf("%f",&b);

printf("Ingresa el valor de c:");
scanf("%f",&c);

// Verificar si es ecuacion de primer grado

if(a == 0){

if(b != 0){

x1 = -c / b;

printf("\nEs una ecuacion de primer grado");
printf("\nEl resultado es: %.2f",x1);

}else{

if(c == 0){
printf("\nLa ecuacion tiene infinitas soluciones");
}else{
printf("\nLa ecuacion no tiene solucion");
}

}

}else{

// Calcular discriminante

discriminante = b * b - 4 * a * c;

if(discriminante > 0){

x1 = (-b + sqrt(discriminante)) / (2 * a);
x2 = (-b - sqrt(discriminante)) / (2 * a);

printf("\nTiene dos raices reales diferentes");
printf("\nPrimera raiz: %.2f",x1);
printf("\nSegunda raiz: %.2f",x2);

}else{

if(discriminante == 0){

x1 = -b / (2 * a);

printf("\nTiene una raiz doble");
printf("\nResultado: %.2f",x1);

}else{

parteReal = -b / (2 * a);
parteImaginaria = sqrt(-discriminante) / (2 * a);

if(parteImaginaria < 0){
parteImaginaria = parteImaginaria * -1;
}

printf("\nTiene dos raices complejas");
printf("\nParte real: %.2f",parteReal);
printf("\nParte imaginaria: %.2f",parteImaginaria);

printf("\nPrimera raiz: %.2f + %.2fi",parteReal,parteImaginaria);
printf("\nSegunda raiz: %.2f - %.2fi",parteReal,parteImaginaria);

}

}

}

}
