#include <stdio.h>

int sum (int num1, int num2) {
    return (num1 + num2);
}

int (*fptr)();

int main () {
    int a=20, b=10;
    fptr = sum;
    printf("20 + 10 = %d\n", (*fptr)(a, b));
    return 0;
}
