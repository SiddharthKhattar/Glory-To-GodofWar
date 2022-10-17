// Program to illustrate use of user defined functions
#include <stdio.h>

1
int rectangle_Perimeter ( float length, float breadth ) {
    float perimeter;
    perimeter = 2 * (length + breadth);
    printf(" Perimeter of given rectangle is: %.2f\n",perimeter);
    return 0;
}

int rectangle_Area ( float length, float breadth) {
    float area;
    area = length * breadth;
    printf("Area of given rectangle is: %.2f\n", area);
    return 0;
}

int main() {
    float length, breadth;
    printf("Enter length of sides of rectangle: ");
    scanf("%f %f", &length, &breadth); 
    rectangle_Perimeter(length, breadth);
    rectangle_Area(length, breadth);
    return 0;
}
