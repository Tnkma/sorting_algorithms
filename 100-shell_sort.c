#include "sort.h"

/**
 * shell_sort - sorts an array using the Knuth sequence
 * @array: the array to sort
 * @size: the size of the array to sort
 *
 * Return: void since were void
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, m;
	int tmp;

	/* check if the array is empty or size less than 2 */
	if (array == NULL || size < 2)
	{
		return;
	}
	/** generate the knuth sequence */
	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			m = i;
			while (m >= gap && array[m - gap] > tmp)
			{
				array[m] = array[m - gap];
				m -= gap;
			}
			array[m] = tmp;
		}
		print_array(array, size);
		/* Reduce the gap */
		gap = (gap - 1) / 3;
	}
}

