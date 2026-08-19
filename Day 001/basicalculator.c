// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int x,y,sum,diff,product,quotient;

    printf("enter a Number x :");
    scanf ("%d",&x);
    printf("Enter a Number y :");
    scanf("%d",&y);

    sum = x + y;
    diff = x - y;
    product = x * y;
    quotient = x / y; 

printf("sum=%d, diff=%d, product=%d, quoitent=%d", sum,diff,product,quotient);

return 0;
}