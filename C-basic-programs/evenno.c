/* Program to find if an integer entered by user is even or odd*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    (num % 2) == 0 ? printf("\n%d is even\n", num) : printf("\n%d is odd\n", num);
    return 0;
}
