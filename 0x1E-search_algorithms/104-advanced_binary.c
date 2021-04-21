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
 * _advanced_binary - search for a value in a sorted array of integers
 * @array: the array of values
 * @low: the smallest index
 * @high: the greatest index
 * @value: the value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * Otherwise, returh the first index where value is located.
 */
static int _advanced_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2;

	if (low > high)
		return (-1);

	print_array(array, low, high);
	if (array[mid] < value)
		return (_advanced_binary(array, mid + 1, high, value));
	if (array[mid] > value)
		return (_advanced_binary(array, low, mid, value));
	if (array[mid - 1] == value)
		return (_advanced_binary(array, low, mid, value));
	return (mid);
}

/**
 * advanced_binary - search for a value in a sorted array of integers
 * @array: the array of values
 * @size: the number of values
 * @value: the value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * Otherwise, returh the first index where value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (array && size ? _advanced_binary(array, 0, size - 1, value) : -1);
}
