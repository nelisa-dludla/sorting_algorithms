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
 * bubble_sort - Function sorts an array of integers
 * @array: Array to be sorted
 * @size: Size of array
 */

void bubble_sort(int *array, size_t size)
{
	int swopped;
	size_t i, j;

	if (size > 1)
	{

		for (i = 0; i < size; i++)
		{
			swopped = 0;
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					swopped = 1;
					print_array(array, size);
				}
			}
			if (swopped == 0)
			{
				break;
			}
		}
	}
}
