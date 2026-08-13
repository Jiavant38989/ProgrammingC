//Q1: Write a program to input two numbers and display their sum. 

#include <stdio.h>

int main() {
    int x,y,sum ;
    printf ("enter a number x : ");
    scanf ("%d",&x);
    printf ("enter a number y : ");
    scanf ("%d",&y);

        sum = x + y;
    printf("sum of x and y is %d", sum);

    return 0;
}