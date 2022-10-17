// Program to print factorials of m numbers
#include <stdio.h>

int main () {
    int num, factorial = 1, i = 1;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);
    
    while (i <= num) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is: %d \n", num, factorial);
    return 0;
}
