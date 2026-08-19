//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}