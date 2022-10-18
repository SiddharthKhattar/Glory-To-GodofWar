/* Program to perform basic calculation operations using switch case */
#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    printf("Enter first number, operand(+, -, *, /), second number separated by spaces: ");
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            printf("Result: %d\n", num1 / num2);
            break;
        default:
            printf("Please give valid values.\n");
            break;
    }
    return 0;
}
