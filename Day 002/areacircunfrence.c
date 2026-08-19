//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
//define PI 3.14

int main() {
    int radius;
    float area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area = %f", area);
    printf("Circumference = %f", circumference);
 
   return 0;
}