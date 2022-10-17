#include <stdio.h>

int sort(int* arr, int size);
int arr_display(int* array, int size);
int linearsearch(int* array, int size, int elem);
int binarysearch(int* array, int size, int elem);

int main()
{
    int choice, arr[10], size, elem, found, i;

    printf("======================================\n");
    printf("========== Select an option ==========\n");
    printf("======================================\n");
    printf("1. Linear search\n");
    printf("2. Binary search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, size);
    printf("\nGiven array: \n");
    arr_display(arr, size);

    printf("\nEnter element to search: ");
    scanf("%d", &elem);

    switch (choice) {
    case 1:
        found = linearsearch(arr, size, elem);
        break;
    case 2:
        found = binarysearch(arr, size, elem);
        break;
    }
    if (found == -1) {
        printf("Element %d not found.\n", elem);
    } else {
        printf("Element %d found at index %d\n", elem, found);
    }
    return 0;
}

int sort(int* arr, int size)
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

int arr_display(int* array, int size)
{
    for (int i = 0; i < size; i++) {
        printf(i == size - 1 ? "%d \n" : "%d, ", array[i]);
    }
    return 0;
}

int linearsearch(int* array, int size, int elem)
{
    int i, flag = 0;

    for (i = 0; i < size; i++) {
        if (array[i] == elem) {
            flag = 1;
            break;
        }
    }
    return (flag == 1) ? i : -1;
}

int binarysearch(int* array, int size, int elem)
{
    int low, high, mid, flag = 0;

    low = 0;
    high = size - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] == elem) {
            flag = 1;
            break;
        } else if (array[mid] < elem) {
            low = mid + 1;
        } else if (array[mid] > elem) {
            high = mid - 1;
        }
    }
    return (flag == 1) ? mid : -1;
}