#include <stdio.h>

int main() {
	int num, i, elem, arr[10], found=0;

	printf("Enter number of elements in the array: ");
	scanf("%d", &num);

	printf("Enter array elements: \n");
	for (i=0; i<num; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\nGiven array: ");
	for (i=0; i<num; i++) {
		printf(i == num-1 ? "%d\n\n" : "%d, ", arr[i]);
	}
	
	printf("Enter element to search in given array: ");
	scanf("%d", &elem);

	for (i=0; i<num; i++) {
		if (arr[i] == elem) {
			found=1;
			printf("Element %d found at index %d.\n", elem, i);
			break;
		}
	}

	if (!found) {
		printf("Element %d not found in array.\n", elem);
	}

	return 0;
}
