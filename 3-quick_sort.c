#include "sort.h"

/**
 * swap - Swaps the position
 * @array: array
 * @number1: a number
 * @number2: a number
 * @size: size
 **/
void swap(int *array, int *number1, int *number2, size_t size)
{
    int exchange_position = *number1;

    *number1 = *number2;
    *number2 = exchange_position;
    print_array(array, size);
}
/**
 * partition - Makes a partition
 * @array: array
 * @start: start num
 * @end: end num
 * @size: size
 * Return: an int
 **/
int partition(int *array, int start, int end, size_t size)
{
    int pivot = array[end];
    int index = start;
    int i = 0;

    for (i = start; i < end; i++)
    {
        if (array[i] <= pivot)
        {
            if (index != i)
            {
                swap(array, &array[i], &array[index], size);
            }
            index++;
        }
    }
    if (index != end)
        swap(array, &array[end], &array[index], size);
    return (index);
}
/**
 * quickSort - quicksort
 * @array: array
 * @low: start num
 * @high: end num
 * @size: size
 **/
void quickSort(int *array, int low, int high, size_t size)
{
    int pi = 0;

    if (low < high)
    {
        pi = partition(array, low, high, size);
        quickSort(array, low, pi - 1, size);
        quickSort(array, pi + 1, high, size);
    }
}

/**
 * quick_sort - sorts an array of integers using the quick sort algorithm
 * @array: array of integers
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quickSort(array, 0, size - 1, size);
}