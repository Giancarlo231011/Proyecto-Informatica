#include <stdio.h>
main(){

float cal1, cal2, cal3, promedio;

printf("Ingresa la primera calificacion:");
scanf("%f",&cal1);

printf("Ingresa la segunda calificacion:");
scanf("%f",&cal2);

printf("Ingresa la tercera calificacion:");
scanf("%f",&cal3);

promedio = (cal1 + cal2 + cal3) / 3;

printf("\nPromedio: %.2f",promedio);

if(promedio >= 9 && cal1 >= 6 && cal2 >= 6 && cal3 >= 6){
printf("\nAlumno exento");
}else{
if(promedio >= 6){
printf("\nAlumno ordinario");
}else{
printf("\nAlumno extra");
}
}

}
