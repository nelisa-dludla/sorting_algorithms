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
 * partition - Function implements the Lomuto partition
 * scheme on an array
 * @array: An array
 * @left: Left most index in array
 * @right: Highest index in array
 * @size: Size of array
 * Return: Pivots new index
 */
int partition(int *array, int left, int right, int size)
{
	int pivot, i, j;

	pivot = array[right];
	i = left - 1;

	for (j = left; j < right; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[right]);
	print_array(array, size);

	return (i + 1);
}

/**
 * quick_sort_helper - Function handles the partition and quick sort
 * functions
 * @array: An array to be sorted
 * @left: Lowest index in array
 * @right: Right most index in array
 * @size: Size of array
 */
void quick_sort_helper(int *array, int left, int right, int size)
{
	int pivot_index;

	if (left < right)
	{
		pivot_index = partition(array, left, right, size);
		quick_sort_helper(array, left, pivot_index - 1, size);
		quick_sort_helper(array, pivot_index + 1, right, size);
	}
}

/**
 * quick_sort - Function sorts an array of integers
 * using the quick sort algorithm
 * @array: The array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size > 1)
		quick_sort_helper(array, 0, size - 1, size);
	else
		return;
}

