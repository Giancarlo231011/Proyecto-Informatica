#include <stdio.h>
main(){

float numero1, numero2, numero3;
float resultado;

printf("Ingresa el primer numero:");
scanf("%f",&numero1);

printf("Ingresa el segundo numero:");
scanf("%f",&numero2);

printf("Ingresa el tercer numero:");
scanf("%f",&numero3);

if(numero1 < 0){

resultado = numero1 * numero2 * numero3;

printf("\nEl primer numero es negativo");
printf("\nEl producto es: %.2f",resultado);

}else{

if(numero1 == 0){

resultado = numero1 + numero2 + numero3;

printf("\nEl primer numero es cero");
printf("\nLa suma es: %.2f",resultado);

}else{

resultado = (numero1 + numero2 + numero3) / 3;

printf("\nEl primer numero es positivo");
printf("\nEl promedio es: %.2f",resultado);

}

}

}
