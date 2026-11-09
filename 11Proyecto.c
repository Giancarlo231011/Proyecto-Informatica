#include <stdio.h>
main(){

int numero;

printf("Ingresa un numero entero:");
scanf("%d",&numero);

if(numero > 0){
printf("\nEl numero es positivo");
}else{
if(numero < 0){
printf("\nEl numero es negativo");
}else{
printf("\nEl numero es cero");
}
}

if(numero % 2 == 0){
printf("\nEl numero es par");
}else{
printf("\nEl numero es impar");
}

}
