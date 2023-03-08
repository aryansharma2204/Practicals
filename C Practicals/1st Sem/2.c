#include <stdio.h>

int main() {
    float celsius, fahrenheit;
printf("Aryan Sharma\n");
    // Ask user for temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Display result
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}
