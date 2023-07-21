#include "sort.h"

/**
 * swap - function that swaos two numbers
 * @x: pointer to first number
 * @y: pointer to second number
*/

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
