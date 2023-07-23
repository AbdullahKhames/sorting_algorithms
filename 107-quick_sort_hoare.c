#include "sort.h"

/**
 * swap3 - function that swaos two numbers
 * @x: pointer to first number
 * @y: pointer to second number
*/

void swap3(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}


/**
 * partition_hoare - function to quick sort wih
 * hoare impl
 * @arr: array o be sorted
 * @low: most left index
 * @high: most high index
 * @size: size of array
 * Return: partition
*/
int partition_hoare(int *arr, int low, int high, const size_t size)
{
	int pivot = arr[high];
	int i = low - 1;
	int j = high;

	do {
		do {
			i++;
		} while (arr[i] < pivot);

		do {
			j--;
		} while (arr[j] > pivot);

		if (i < j)
		{
			swap3(&arr[i], &arr[j]);
			print_array(arr, size);
		}

	} while (i < j);

	if (i != high)
	{
		swap3(&arr[i], &arr[high]);
		print_array(arr, size);
	}

	return (i);
}
/**
 * quick_sort_hoare_recur - function to quick sort wih
 * hoare impl
 * @array: array o be sorted
 * @low: most left index
 * @high: most high index
 * @size: size of array
*/
void quick_sort_hoare_recur(int *array, int low, int high, const size_t size)
{
	int j;

	if (low < high)
	{
		j = partition_hoare(array, low, high, size);
		quick_sort_hoare_recur(array, low, j - 1, size);
		quick_sort_hoare_recur(array, j, high, size);
	}
}

/**
 * quick_sort_hoare - function to quick sort wih
 * hoare impl
 * @array: array o be sorted
 * @size: size of array
*/
void quick_sort_hoare(int *array, size_t size)
{
	quick_sort_hoare_recur(array, 0, size - 1, size);
}
