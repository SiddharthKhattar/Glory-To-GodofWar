//program to sort an array in ascending order.
#include <stdio.h>

int sortascend(int array[], int size) {
    int i, j, temp;
    for (i=0; i<size; i++) {
        for (j=i+1; j<size; j++) {
            if (array[j] < array[i]) {
                temp = array[i]; 
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf ("Ascending sorted array: \n");
    for (i=0; i<size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    return 0;
}

int sortdescend(int array[], int size) {
    int i, j, temp;
    for (i=0; i<size; i++) {
        for (j=i+1; j<size; j++) {
            if (array[j] > array[i]) {
                temp = array[i]; 
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf ("Descending sorted array: \n");
    for (i=0; i<size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    return 0;
}

int main() {
    int i, num;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    int array[num];
    for (i=0; i < num; i++) {
        printf("Enter %dth element: ");
        scanf("%d", &array[i]);
    }
    printf("\nGiven array: \n");
    for (i=0; i<num; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    sortascend(array, num);
    sortdescend(array, num);

    return 0;
}
