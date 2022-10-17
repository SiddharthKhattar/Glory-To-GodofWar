#include <stdio.h>

int arr_display(int * array, int size);

int main() {
    int arr[10], i, j, num;

    printf("Enter number of elements in the array: ");
    scanf("%d", &num);

    printf("\nEnter array elements: \n");
    for (i=0; i<num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Given array: \n\n");
    arr_display(arr ,num);
    printf("\n\n");

    selection_sort(arr, num);

    printf("Final sorted array: \n");
    arr_display(arr, num);
    printf("\n");

    return 0;
}

int arr_display(int * array, int size) {
    for (int i=0; i<size; i++) {
        printf("%d  ", array[i]);
    }
    return 0;
}

int selection_sort(int * array, int size) {
    int i, j, temp, min;

    for (i=0; i<size-1;i++) {
        printf("Pass %d: \n", i+1);
        min = i;

        for (j=i+1; j<size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }

        temp = array[min];
        array[min] = array[i];
        array[i] = temp;

        if (min == i) {
            printf("No element swapped.\n");
        } else {
            printf("Swapped: %d <==> %d\n", array[i], array[min]);
        }

        printf("Resulting array: ");
        arr_display(array, size);
        printf("\n\n");
    }
    return 0;
}