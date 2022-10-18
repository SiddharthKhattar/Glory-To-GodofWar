#include <stdio.h>

int arr_display(int* array, int size);
int insertion_sort(int* array, int size);
int arr_merge(int* array1, int size1, int* array2, int size2, int* merged_array);

int main()
{
    int i, num1, num2, arr1[10], arr2[10], arr3[20];

    printf("Enter number of elements in array 1: ");
    scanf("%d", &num1);

    printf("Enter array elements of array 1: \n");
    for (i = 0; i < num1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in array 2: ");
    scanf("%d", &num2);

    printf("Enter array elements of array 2: \n");
    for (i = 0; i < num2; i++) {
        scanf("%d", &arr2[i]);
    }

    insertion_sort(arr1, num1);
    insertion_sort(arr2, num2);

    printf("\nGiven arrays after sorting: \n");
    printf("Array 1: ");
    arr_display(arr1, num1);
    printf("Array 2: ");
    arr_display(arr2, num2);

    arr_merge(arr1, num1, arr2, num2, arr3);
    printf("\nArrays after merging: \n");
    arr_display(arr3, num1 + num2);

    return 0;
}

int arr_display(int* array, int size)
{
    int i;

    for (i = 0; i < size; i++) {
        printf(i == size - 1 ? "%d\n" : "%d, ", array[i]);
    }
}

int insertion_sort(int* array, int size)
{
    int i, j, key;

    for (i = 0; i < size; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    return 0;
}

int arr_merge(int* array1, int size1, int* array2, int size2, int* merged_array)
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (array1[i] < array2[j]) {
            merged_array[k] = array1[i];
            i++;
        } else {
            merged_array[k] = array2[j];
            j++;
        }
        k++;
    }
    while (i < size1) {
        merged_array[k] = array1[i];
        k++;
        i++;
    }
    while (j < size2) {
        merged_array[k] = array2[j];
        k++;
        j++;
    }

    return 0;
}
