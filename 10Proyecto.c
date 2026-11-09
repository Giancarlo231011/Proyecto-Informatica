#include <stdio.h>
main(){

float a, b, c, d, x;

printf("Ingresa el valor de a:");
scanf("%f",&a);

printf("Ingresa el valor de b:");
scanf("%f",&b);

printf("Ingresa el valor de c:");
scanf("%f",&c);

printf("Ingresa el valor de d:");
scanf("%f",&d);

if(a-c != 0){

x = (d-b) / (a-c);

printf("\nEl valor de x es: %.2f",x);

}else{

if(b == d){
printf("\nLa ecuacion tiene infinitas soluciones");
}else{
printf("\nLa ecuacion no tiene solucion");
}

}

}
