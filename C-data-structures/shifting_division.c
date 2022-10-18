#include <stdio.h>

int main() {
    int x = 21;

    if (x == (x >> 1) << 1 ) {
        printf("Divisible\n");
    } else 
        printf("Not divisible\n");

    printf("%d\n", x);

    return 0;
}
