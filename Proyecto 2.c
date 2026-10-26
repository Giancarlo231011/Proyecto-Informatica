#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    // Solicitar la temperatura en Celsius
    printf("Introduce la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    // Fórmulas
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    // Mostrar los resultados
    printf("Temperatura en Celsius:    %.2f °C\n", celsius);
    printf("Temperatura en Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Temperatura en Kelvin:     %.2f K\n", kelvin);

}
