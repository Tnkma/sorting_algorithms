#include "sort.h"

/**
 * selection_sort - selection method of sorting
 * @array: the array to sort
 * @size: the length/ size of the array
 *
 * Return: void since were void
 */

void selection_sort(int *array, size_t size)
{
	size_t elem_pos, arr_pos = 0, min_value;
	int tmp;

	/** check if the array is empty and size empty */
	if (array == NULL || size < 2)
	{
		return;
	}

	while (arr_pos < size - 1)
	{
		/** keep the count of the current position as the min_value*/
		min_value = arr_pos;
		for (elem_pos = arr_pos + 1; elem_pos < size; elem_pos++)
		{
			/** compare the elem_pos with what in the min_value */
			if (array[elem_pos] < array[min_value])
			{
				/** were sure its the lowest value */
				/** update the min_value to elem_pos */
				min_value = elem_pos;
			}
		}
		/** swap the min_value with the very first value */
		tmp = array[min_value];
		array[min_value] = array[arr_pos];
		array[arr_pos] = tmp;
		print_array(array, size);

		/** increment the arr_pos and go to the next value in the array */
		arr_pos ++;
	}
}
