#include "sort.h"

/**
 * quick_sort - Sort Quick for a array
 * @array: List
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_quick_sort(array, size, 0, size - 1);
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
	int pivot;

	if (low < high)
	{
		pivot = _partition(array, size, low, high);

		_quick_sort(array, size, low, pivot - 1);
		_quick_sort(array, size, pivot + 1, high);
	}
}

/**
 * _partition - Perform Lomuto partition
 * @array: List
 * @size: Size of array
 * @low: Start index
 * @high: End index
 * Return: Index pivot element
 */
int _partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low;

	for (int j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] != array[high])
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
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
