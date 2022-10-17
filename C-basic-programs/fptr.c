#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    int i;

    fp1 = fopen("data.txt", "w+");
    fp2 = fopen("duplicate.txt", "w");

    for (i=0; i<10; i++)
        putw(i, fp1);
    
    rewind(fp1);

    i = getw(fp1);
    while (i != EOF) {
        putw(i, fp2);
        printf("%d,", i);
        i = getw(fp1);
    }

    return 0;
}
