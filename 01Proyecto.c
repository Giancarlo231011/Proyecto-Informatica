#include <stdio.h>
main(){

float numeroUno, numeroDos, numeroTres;
float suma, producto, promedio;

printf("Ingresa el primer numero:");
scanf("%f",&numeroUno);

printf("Ingresa el segundo numero:");
scanf("%f",&numeroDos);

printf("Ingresa el tercer numero:");
scanf("%f",&numeroTres);

suma = numeroUno + numeroDos + numeroTres;
producto = numeroUno * numeroDos * numeroTres;
promedio = suma / 3;

printf("\nLa suma es: %.2f",suma);
printf("\nEl producto es: %.2f",producto);
printf("\nEl promedio es: %.2f",promedio);

}
