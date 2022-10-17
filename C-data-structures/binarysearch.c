#include <stdio.h>

int main()
{
	int num, arr[10], i, elem, low, high, mid, flag = 0;

	printf("Enter the number of elements in the array: ");
	scanf("%d", &num);

	printf("\nEnter elements of array: \n");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr, num);

	printf("\nGiven array: \n");
	for (i = 0; i < num; i++)
	{
		printf(i == num - 1 ? "%d\n\n" : "%d, ", arr[i]);
	}

	printf("Enter an element to search: ");
	scanf("%d", &elem);

	low = 0;
	high = num - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] == elem)
		{
			printf("Element %d found at index %d.\n", elem, mid);
			flag = 1;
			break;
		}
		else if (arr[mid] < elem)
		{
			low = mid + 1;
		}
		else if (arr[mid] > elem)
		{
			high = mid - 1;
		}
	}
	if (flag == 0)
	{
		printf("Element %d not found.\n", elem);
	}

	return 0;
}

int sort(int *array, int size)
{
	int i, j, key;

	for (i = 1; i < size; i++)
	{
		key = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
	return 0;
}
