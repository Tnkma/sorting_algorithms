#include "sort.h"

/**
 * swap_elements - swaps the two elements
 * @element_a: the first element
 * @element_b: the second element
 *
 * Return: void since were void
 */

void swap_elements(int *element_a, int *element_b)
{
	int tmp;

	tmp = *element_a;
	*element_a = *element_b;
	*element_b = tmp;
}

/**
 * partition - the Lomuto partition scheme that partitions the array
 * @array: the array to partition
 * @low: the lowest number
 * @las_num: the last element of the pivot
 *
 * Return: the partitioned aray
 */
int partition(int *array, int low, int las_num)
{
	int pivot = array[las_num];
	int i = low - 1, j;

	for (j = low; j < las_num; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_elements(&array[i], &array[j]);
		}
	}

	swap_elements(&array[i + 1], &array[las_num]);
	
	return (i + 1);
}

/**
 * recursive_call - recursively sorts the array
 * @array: the array to sort
 * @low: the starting index of the array
 * @las_ele: the last element in the array
 *
 * Return: void since were void
 */

void recursive_call(int *array, int low, int las_ele)
{
	int index;

	if (low < las_ele)
	{
		index = partition(array, low, las_ele);
		recursive_call(array, low, index - 1);
		recursive_call(array, index + 1, las_ele);
	}
	print_array(array, las_ele + 1);
}
/**
 * quick_sort - sorts an array of integer using the quick_sort algorithm
 * @array: the array of integers to sort
 * @size: the size of the array
 *
 * Return: void since were void
 */

void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
	{
		return;
	}
	recursive_call(array, 0, size - 1);
}
