// Program to generate a pyramid

#include <stdio.h>
#include <curses.h>
#include <stdlib.h>

int main() {
    int num, i, x = 40, y;
    erase();
    printf("Enter number of rows for pyramid: ");
    scanf("%d", &num);
    for (y = 0; y <= num; y++) {
        gotoxy(x, y+1);
        for (i = 0-y; i <= y; i++) {
            printf("%d ", abs(i));
            x -= 3;
        }
    }
    return 0;
}

