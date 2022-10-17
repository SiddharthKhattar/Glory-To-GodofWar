/* Program to find largest of 3 numbers input by user. */
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 integers, separated by space or newline: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d is the largest integer.\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d is the largest integer.\n", b);
    }
    else if (c >= a && c >= b) {
        printf("%d is the largest integer.\n", c);
    }
    return 0;
}
