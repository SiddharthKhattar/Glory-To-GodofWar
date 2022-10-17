#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    char word;
    char str[15];

    FILE *fp;
    fp = fopen("error.txt","w");
    if(fp == NULL)
    {
        perror("Error: ");
        exit(1);
    }
    printf("Enter number: ");
    scanf("%d", &num);
    scanf("%s", str);

//    putw(num, fp);
    fprintf(fp, "%d %s", num, str);
    fclose(fp);

    return 0;
}
