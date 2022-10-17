// Program to demonstrate difference between call by reference and call by value

#include <stdio.h>

int modifyreference(int *a, int *b) {
    *a += 10;
    *b += 20;
    return 0;
}

int modifyvalue(int a, int b) {
    a += 10;
    b += 20;
    return 0;
}

int main() {
    int a=50, b=70;
    printf("Original values of variables:\n");
    printf("a = %d \nb = %d\n\n", a, b);
    
    modifyvalue(a, b);

    printf("Values after calling by value and modifying:\n");
    printf("a = %d \nb = %d\n\n", a, b);

    modifyreference(&a, &b);
    
    printf("Values after calling by reference and modifying:\n");
    printf("a = %d \nb = %d\n\n", a, b);

    return 0;
}
