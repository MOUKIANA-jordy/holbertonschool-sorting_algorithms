#include "sort.h"

/**
 * selection_sort - sorts all selecty like
 * @array: array to sort
 * @size: size array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *min;

	for (i = 0; i < size; i++)
	{
		min = &array[i];
		for (j = i + 1; j < size; j++)
		{
			if (*min > array[j])
				min = &array[j];
		}
		if (*min != array[i])
		{
			swap(&array[i], min);
			print_array(array, size);
		}
	}
}

/**
 * swap - Swap values in array
 * @a: Number 1
 * @b: Number 2
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
