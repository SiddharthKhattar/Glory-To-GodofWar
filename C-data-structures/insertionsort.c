#include <stdio.h>

int arr_display(int * arr, int size);
int insertion_sort(int * arr, int size);

int main() {
	int num, arr[10], i, j, current;

	printf("Enter number of elements in array: ");
	scanf("%d", &num);

	printf("Enter elements of array: \n");
	for (i=0; i<num; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("\nGiven array: \n");
	arr_display(arr, num);

	insertion_sort(arr, num);
	printf("Sorted array: \n");
	arr_display(arr, num);

	return 0;
}

int arr_display(int * arr, int size) {
	int i;

	for (i=0; i<size; i++) {
		printf(i == size-1 ? "%d\n\n" : "%d, ", arr[i]);
	}
	return 0;
}

int insertion_sort(int * arr, int size) {
	int i, j, current;

	for (i = 1; i < size; i++) {
		current = arr[i];
		j = i-1;
		while (j >= 0 && arr[j] > current) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
	return 0;
}
