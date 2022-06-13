#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t fn, sn, aux;

	if (array == NULL)
		return;

	for (fn = 0; fn < size; fn++)
	{
		for (sn = 0; sn < size - 1; sn++)
		{
			if (array[sn] > array[sn + 1])
			{
				aux = array[sn];
				array[sn] = array[sn + 1];
				array[sn + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
