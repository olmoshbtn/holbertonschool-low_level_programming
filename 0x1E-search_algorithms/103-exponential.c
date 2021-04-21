#include "search_algos.h"


/**
 * print_array - print the values in an array
 * @array: the array of values
 * @low: the smallest index
 * @high: the greatest index
 */
static void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low <= high)
	{
		if (low < high)
			printf("%d, ", array[low++]);
		else
			printf("%d\n", array[low++]);
	}
}

/**
 * _binary_search - search for a value in a sorted array of integers
 * @array: the array of values
 * @low: the smallest index
 * @high: the greatest index
 * @value: the value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * Otherwise, returh the first index where value is located.
 */
static int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (1)
	{
		print_array(array, low, high);

		if (low == high)
			return (array[low] == value ? (int) low : -1);

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
}

/**
 * exponential_search - search for a value in a sorted array of integers
 * @array: the array of values
 * @size: the number of values
 * @value: the value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * Otherwise, returh the first index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 1;

	if (array && size)
	{
		while (j < size && array[j] < value)
		{
            printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			i = j, j *= 2;
		}
		if (size <= j)
			j = size - 1;
        printf("Value found between indexes [%lu] and [%lu]\n", i, j);
		return (_binary_search(array, i, j, value));
	}
	return (-1);
}
