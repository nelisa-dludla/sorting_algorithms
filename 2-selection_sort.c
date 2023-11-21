#include "sort.h"

/**
 * swap - Function swaps the values of two variables
 * @a: First variable
 * @b: Second variable
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Function sorts an array using selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (size > 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			min = i;

			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min])
					min = j;
			}
			if (i != min)
			{
				swap(&array[i], &array[min]);
				print_array(array, size);
			}
		}
	}
	else
		return;
}
