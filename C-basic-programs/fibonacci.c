// Program to display fibonacci sequence using recursion
// 
//
#include <stdio.h>

int fibonacci(int num) {
    if (num==0) {
        return 0;
    }
    else if (num==1) {
        return 1;
    }
    else {
        return (fibonacci(num-1) + fibonacci(num-2));
    }
}

int main() {
    int n, i;
    printf("How many Fibonacci numbers to find: ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
