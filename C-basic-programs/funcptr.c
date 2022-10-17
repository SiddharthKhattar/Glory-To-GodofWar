// Program that uses function pointers as function arguments.

#include <stdio.h>

int(*fptr)();
int multiply(int a, int b) {
    return a*b;
}

int getvals() {
    int num1, num2;
    printf("Enter two integers: "\n);
    scanf("%d %d", &num1, &num2);
    return (*fptr)(num1, num2);
}


int main() {
    fptr = multiply;
    printf("%d", getvals());
    return 0;
}


