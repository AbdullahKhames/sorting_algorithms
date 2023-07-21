#include "sort.h"

/**
 * bubble_sort - fnction to sort arryay
 * @array: array to sort
 * @size: size of array
*/

void bubble_sort(int *array, size_t size)
{
	int isSorted = 0;
	size_t i, j;

	if (!array || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		if (i > 0 && !isSorted)
		{
			break;
		}

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_arr(array, size);
				isSorted = 1;
			}
		}
	}
}
