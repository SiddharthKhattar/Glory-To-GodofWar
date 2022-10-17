#include <stdio.h>

int factorial(int num);

int main() {
    int num;
    printf( "Enter number - ");
    scanf("%d", &num);
    printf("Factorial: %d", factorial(num));
    return 0;
}

int factorial(int num) {
    if (num == 1)
        return num;
    else
        return num*factorial(num-1);
}
