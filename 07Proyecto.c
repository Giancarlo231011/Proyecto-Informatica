#include <stdio.h>
#include <math.h>
main(){

float catetoUno, catetoDos;
float hipotenusa, perimetro, area;

printf("Ingresa el primer cateto:");
scanf("%f",&catetoUno);

printf("Ingresa el segundo cateto:");
scanf("%f",&catetoDos);

hipotenusa = sqrt(catetoUno * catetoUno + catetoDos * catetoDos);

perimetro = catetoUno + catetoDos + hipotenusa;

area = (catetoUno * catetoDos) / 2;

printf("\nHipotenusa: %.2f",hipotenusa);
printf("\nPerimetro: %.2f",perimetro);
printf("\nArea: %.2f",area);

}
