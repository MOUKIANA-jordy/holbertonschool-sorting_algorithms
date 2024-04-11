#include "sort.h"

/**
 * bubble_sort - short a array for integer using the bubble sort algorithm
 * @size: size of the array
 * @array: is a pointer to an array
 */
void bubble_sort(int *array, size_t size)
{
	int j, check;
	int n = size - 1;

	while (1)
	{
		check = 0;
		for (j = 0; j < n; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
			else
				check++;
		}
		if (check == n)
			break;
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

