#include "sort.h"

/**
 * partition - Perform Lomuto partition
 * @array: List
 * @size: Size of array
 * @low: Start index
 * @high: End index
 * Return: Index pivot element
 */
int partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * _quick_sort - Recursive for implement Quick sort Lomuto
 * @array: List
 * @size: Size of array
 * @low: Start index
 * @high: End index
 */
void _quick_sort(int *array, size_t size, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, size, low, high);

		_quick_sort(array, size, low, pi - 1);
		_quick_sort(array, size, pi + 1, high);
	}
}

/**
 * quick_sort - Sort Quick for a array
 * @array: List
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	_quick_sort(array, size, 0, size - 1);
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
