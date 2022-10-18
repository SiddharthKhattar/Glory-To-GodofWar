#include <stdio.h>

int mergesort(int arr[], int first, int last) {
	int middle = (first+last)/2;

	int left[middle+1], right[last-middle];

	for(int i=0; i<=middle; i++) {
		left[i] = arr[i];
	}

	for (int j = 0; j < middle; j++) {
		right[i] = arr[middle+1+i];
	}



