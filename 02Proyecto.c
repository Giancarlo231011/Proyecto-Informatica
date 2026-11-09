#include <stdio.h>
main(){

float celsius, fahrenheit, kelvin;

printf("Ingresa la temperatura en Celsius:");
scanf("%f",&celsius);

fahrenheit = (celsius * 9 / 5) + 32;
kelvin = celsius + 273.15;

printf("\nFahrenheit: %.2f",fahrenheit);
printf("\nKelvin: %.2f",kelvin);

}
