#include <stdio.h>

int main() {
    FILE *fp;
    int count=0;
    char str[15]="Hello World!", ch;

    fp = fopen("file.txt", "w+");
    fputs(str, fp);
    rewind(fp);
    ch = fgetc(fp);
    while (ch != EOF) {
        ch = fgetc(fp);
        count++;
    }
    printf("Characters in file are: %d", count);
    return 0;
}
