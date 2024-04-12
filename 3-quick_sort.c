#include "sort.h"

/**
 * quick_sort - Sort Quick for a array
 * @array: List
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
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
	int i = low, temp, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != high)
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i);
}
