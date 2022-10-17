#include <stdio.h>
#include <stdlib.h>

int strlength(char* str);
char* strconcat(char* s1, char* s2);
int strcmp(char* s1, char* s2);
char* strcopy(char* src, char* dest);

int main()
{
    int option;
    char choose[5], str1[50], str2[50];

    printf("======================================\n");
    printf("========== Select an option ==========\n");
    printf("======================================\n");
    printf("1. Find string length\n");
    printf("2. Concatenation of two strings\n");
    printf("3. Comparison of two strings.\n");
    printf("4. Copy one string to another\n");
    printf("Enter your choice: ");
    fgets(choose, 5, stdin);
    option = strtol(choose, NULL, 10);

    switch (option) {
    case 1:
        printf("\nEnter a string: ");
        fgets(str1, 50, stdin);
        printf("Length of the given string is: %d\n", strlength(str1));
        break;
    case 2:
        printf("\nEnter string 1: ");
        fgets(str1, 50, stdin);
        printf("Enter string 2: ");
        fgets(str2, 50, stdin);
        printf("Concatenated string: %s\n", strconcat(str1, str2));
        break;
    case 3:
        printf("\nEnter 1st string: ");
        fgets(str1, 50, stdin);
        printf("Enter 2nd string: ");
        fgets(str2, 50, stdin);
        if (strcmp(str1, str2) == 0) {
            printf("Strings are similar!\n");
        } else {
            printf("Strings are not similar!\n");
        }
        break;
    case 4:
        printf("\nEnter string: ");
        fgets(str1, 50, stdin);
        printf("Copied string: %s\n", strcopy(str1, str2));
    }
    return 0;
}

int strlength(char* str)
{
    int count;
    for (count = 0; str[count] != '\n'; count++)
        ;
    return count;
}

char* strconcat(char* s1, char* s2)
{
    int i, j;
    char* strptr = s1;

    for (i = 0; s1[i] != '\n'; i++)
        ;

    for (j = 0; s2[j] != '\n'; i++, j++) {
        s1[i] = s2[j];
    }

    i++;
    s1[i] = '\0';

    return strptr;
}

int strcmp(char* s1, char* s2)
{
    int i;

    if (strlength(s1) != strlength(s2)) {
        return 1;
    }
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            return 1;
        }
    }
    return 0;
}

char* strcopy(char* src, char* dest)
{
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}
