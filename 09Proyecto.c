#include <stdio.h>
main(){

float cal1, cal2, cal3, cal4;
float final;

printf("Ingresa la primera calificacion:");
scanf("%f",&cal1);

printf("Ingresa la segunda calificacion:");
scanf("%f",&cal2);

printf("Ingresa la tercera calificacion:");
scanf("%f",&cal3);

printf("Ingresa la cuarta calificacion:");
scanf("%f",&cal4);

final = cal1 * 0.20 + cal2 * 0.20 + cal3 * 0.25 + cal4 * 0.35;

printf("\nCalificacion final: %.2f",final);

}
