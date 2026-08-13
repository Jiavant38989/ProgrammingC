// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include <stdio.h>

int main() {
    int length, breadth ;
    printf ("Enter the length of the rectangle: ");
    scanf ("%d", &length);
    printf ("Enter the breadth of the rectangle: ");
    scanf ("%d", &breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    printf ("Area=%d, Perimeter=%d", area, perimeter);
    return 0;
}
