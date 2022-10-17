#include <stdio.h>

int main()
{
    int num, arr[10], i, j, temp;

    printf("Enter number of elements in array: ");
    scanf("%d", &num);

    printf("\nEnter elements of array: \n");
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nGiven array: \n");
    for (i = 0; i < num; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");

    // Bubble sort section
    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: \n");
    for (i = 0; i < num; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    return 0;
}
