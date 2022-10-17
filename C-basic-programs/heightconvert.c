/* Program to convert height/length from centimeters to inches. */
#include <stdio.h>
#include <math.h>

int main() {
    double height_cm, height_feet, height_inch;
    printf("Enter height in centimeters: ");
    scanf("%lf", &height_cm);
    
    height_inch = modf((height_cm / 30.48), &height_feet);
    height_inch *= 12;

    printf("Height is: %.0lf feet %.0lf inches.\n", height_feet, height_inch);
    
    return 0;
}
