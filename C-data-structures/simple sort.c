#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10], i, j, temp, num;

    printf("Enter number of elements in array: ");
    scanf("%d", &num);
	
	srand(time(0));

   	for (i=0; i<num; i++) {
		arr[i] = rand() % 23;
	}

	printf("\nRandomly generated array: \n");
   	for (i=0; i<num; i++) {
		printf("%d ", arr[i]);	
	}
	printf("\n");

	for (i=0; i<num-1; i++) {
		for (j=i; j<num; j++) {
			if (arr[j] < arr[i]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	printf("\n Sorted array: \n");
   	for (i=0; i<num; i++) {
		printf("%d ", arr[i]);	
	}

	printf("\n");

	return 0;
}
