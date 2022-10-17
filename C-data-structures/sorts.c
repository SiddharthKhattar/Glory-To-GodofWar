#include <stdio.h>

int array_entry(int* array, int size);
int arr_display(int* array, int size);
int bubble_sort(int* array, int size);
int selection_sort(int* arr, int size);
int insertion_sort(int* arr, int size);
int arr_merge(int* array1, int size1, int* array2, int size2, int* merged_array);

int main()
{
    int choice, size, size2, arr[10], arr2[10], mergedarray[20];

    printf("======================================\n");
    printf("========== Select an option ==========\n");
    printf("======================================\n");
    printf("1. Bubble sort\n");
    printf("2. Selection sort on array: { 15,4,23,32,87,43,8,72}\n");
    printf("3. Insertion sort\n");
    printf("4. Merging two sorted arrays\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("Enter number of elements in array: ");
        scanf("%d", &size);
        printf("Enter array elements: ");
        array_entry(arr, size);
        printf("\nGiven array: \n");
        arr_display(arr, size);
        bubble_sort(arr, size);
        printf("\nArray after sorting: \n");
        arr_display(arr, size);
        break;
    case 2:
        int fixed_arr[] = { 15, 4, 23, 32, 87, 43, 8, 72 };
        size = 8;
        printf("\nGiven array: \n");
        arr_display(fixed_arr, size);
        selection_sort(fixed_arr, size);
        printf("\nArray after sorting: \n");
        arr_display(fixed_arr, size);
        break;
    case 3:
        printf("Enter number of elements in array: ");
        scanf("%d", &size);
        printf("Enter array elements: ");
        array_entry(arr, size);
        printf("\nGiven array: \n");
        arr_display(arr, size);
        insertion_sort(arr, size);
        printf("\nArray after sorting: \n");
        arr_display(arr, size);
        break;
    case 4:
        printf("Enter number of elements in array 1: ");
        scanf("%d", &size);
        printf("Enter array 1 elements: ");
        array_entry(arr, size);
        printf("Enter number of elements in array 2: ");
        scanf("%d", &size2);
        printf("Enter array 2 elements: ");
        array_entry(arr2, size2);
        insertion_sort(arr, size);
        insertion_sort(arr2, size2);
        printf("\nGiven sorted arrays: \n");
        printf("Array 1: ");
        arr_display(arr, size);
        printf("Array 2: ");
        arr_display(arr2, size2);
        arr_merge(arr, size, arr2, size2, mergedarray);
        printf("Merged array: ");
        arr_display(mergedarray, size + size2);
        break;
    }
    return 0;
}

int array_entry(int* array, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    return 0;
}

int arr_display(int* array, int size)
{
    for (int i = 0; i < size; i++) {
        printf(i == size - 1 ? "%d \n" : "%d, ", array[i]);
    }
    return 0;
}

int bubble_sort(int* array, int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return 0;
}

int selection_sort(int* array, int size)
{
    int i, j, temp, min;

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

int insertion_sort(int* arr, int size)
{
    int i, j, current;

    for (i = 1; i < size; i++) {
        current = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
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