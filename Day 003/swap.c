//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int x, y, temp;
    printf("Enter a numbers x :");
    scanf("%d", &x);
    printf("Enter a numbers y :");
    scanf("%d", &y);
    temp = x;
    x = y;
    y = temp;
    printf("After swap: %d %d", x, y);
    return 0;
} 