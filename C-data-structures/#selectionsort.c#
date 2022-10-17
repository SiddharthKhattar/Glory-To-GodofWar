#include <stdio.h>

int arr_display(int* array, int size);
int selection_sort(int* array, int size);

int main()
{
    int arr[] = { 15, 4, 23, 32, 87, 43, 8, 72 };
    int size = 8, i;

    printf("Given array: \n");
    arr_display(arr, size);

    selection_sort(arr, size);

    printf("Final sorted array: \n");
    arr_display(arr, size);
    return 0;
}

int arr_display(int* array, int size)
{
    for (int i = 0; i < size; i++) {
        printf(i == size - 1 ? "%d \n\n" : "%d, ", array[i]);
    }
    return 0;
}

int selection_sort(int* array, int size)
{
    int i, j, k, temp, min;

    for (i = 0; i < size - 1; i++) {
        min = i;
        printf("Pass %d:\n", i + 1);
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;

        if (i == min) {
            printf("No element swapped.\n");
        } else {
            printf("Swapped %d <==> %d.\n", array[i], array[min]);
        }
        printf("Resulting array: ");
        arr_display(array, size);
    }
    return 0;
}