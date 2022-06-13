#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, h, swap;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		h = i;

		for (j = i + 1; j < size; j++)
			if (array[j] < array[h])
				h = j;

		swap = array[i];
		array[i] = array[h];
		array[h] = swap;
	if (i != h)
		print_array(array, size);
	}
}
