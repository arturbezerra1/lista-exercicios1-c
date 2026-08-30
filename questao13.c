#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius (C): ");
    scanf("%f", &celsius);

   
    fahrenheit = (9 * celsius + 160) / 5;

    printf("Temperatura em Fahrenheit: %.1f F\n", fahrenheit);

    return 0;
}