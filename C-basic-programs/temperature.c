#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f celsius in fahrenheit is: %.2f\n", celsius, fahrenheit);
}