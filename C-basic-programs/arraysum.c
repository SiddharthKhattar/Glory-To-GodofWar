// Program to compute sum of all elements stored in array
//
// What are pointers?
// Pointers are varibales that contain the address of the location in computer memory where data is stored. It can be used to access this memory location and consequently access the data.

#include <stdio.h>

int main() {
    int size, sum=0, i;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    int *ptr=arr;

    for(i=0; i < size; i++) {
        printf("Enter %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++) {
        sum += *ptr;
        *ptr++;
    }

    printf("Sum of elements = %d\n", sum);
    return 0;
}
