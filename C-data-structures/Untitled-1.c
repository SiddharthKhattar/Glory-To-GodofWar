#include <stdio.h>
#include <unistd.h>

int main()
{
    int a = 0, pid;
    pid = fork();
    if (pid == 0) {
        a = a - 10;
        printf("u = %d\n", a);
    } else {
        a = a + 10;
        printf("x = %d\n", a);
    }
}