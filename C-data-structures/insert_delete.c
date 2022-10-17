#include <stdio.h>

int array_insert(int* arr, int elem, int arr_size);
int array_index_insert(int* arr, int size, int elem, int index);
int array_delete(int* arr, int elem, int arr_size);

int main()
{
    int arr[10], num, i, elem, pos, choice;

    printf("==================================\n");
    printf("========= Select an option =======\n");
    printf("==================================\n");
    printf("1. Insert an element in an array\n");
    printf("2. Insert an element at a particular index in an array\n");
    printf("3. Delete an element from an array\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number of elements in the array: ");
    scanf("%d", &num);

    printf("\nEnter array elements in sorted order: \n");
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nGiven array: \n");
    for (i = 0; i < num; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");
    switch (choice) {
    case 1:
        printf("Enter an element to insert into the array: ");
        scanf("%d", &elem);
        array_insert(arr, elem, num);
        printf("\nArray after insertion: \n");
        for (i = 0; i <= num; i++) {
            printf("%d  ", arr[i]);
        }
        break;
    case 2:
        printf("Enter an element to insert into the array: ");
        scanf("%d", &elem);
        printf("Enter index to insert element at: ");
        scanf("%d", &pos);
        array_index_insert(arr, num, elem, pos);
        printf("\nArray after insertion: \n");
        for (i = 0; i <= num; i++) {
            printf("%d  ", arr[i]);
        }
        break;

    case 3:
        printf("Enter an element to delete from the array: ");
        scanf("%d", &elem);
        array_delete(arr, elem, num);
        printf("\nArray after deletion: \n");
        for (i = 0; i < num - 1; i++) {
            printf("%d  ", arr[i]);
        }
        break;
    }
    printf("\n");
    return 0;
}

int array_insert(int* arr, int elem, int arr_size)
{
    int i, j;
    if (elem > arr[arr_size - 1]) {
        arr[arr_size] = elem;
        return 0;
    } else {
        for (i = 0; i < arr_size; i++) {
            if (arr[i] > elem) {
                for (j = arr_size - 1; j >= i; j--) {
                    arr[j + 1] = arr[j];
                }
                arr[i] = elem;
                break;
            }
        }
    }
    return 0;
}

int array_index_insert(int* arr, int size, int elem, int index)
{
    int i;

    for (i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = elem;

    return 0;
}

int array_delete(int* arr, int elem, int arr_size)
{
    int i, j;

    for (i = 0; i < arr_size; i++) {
        if (arr[i] == elem) {
            for (j = i; j < arr_size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }

    return 0;
}