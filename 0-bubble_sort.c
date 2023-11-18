#include "sort.h"

/**
 * swap - swap the values
 * @element_a: the first element to swap
 * @element_b: the second element to swap
 *
 * Return: void since were void
 */

void swap(int *element_a, int *element_b)
{
	int tmp; /** temporary variable to hold the elements */

	tmp = *element_a;
	*element_a = *element_b;
	*element_b = tmp;
}

/**
 * bubble_sort - data sorting algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: Nothing since were void
 */

void bubble_sort(int *array, size_t size)
{
	size_t arr_pos, elem_pos;

	/** iterate over the array first */
	for (arr_pos = 0; arr_pos < size - 1; arr_pos++)
	{
		for (elem_pos = 0; elem_pos < size - arr_pos - 1; elem_pos++)
		{
			if (array[elem_pos] > array[elem_pos + 1])
			{
				swap(&array[elem_pos], &array[elem_pos + 1]);
				print_array(array, size);
			}
		}
	}
}
