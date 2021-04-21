#include "search_algos.h"


/**
 * interpolation_search - search for a value in a sorted array of integers
 * @array: the array of values
 * @size: the number of values
 * @value: the value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * Otherwise, returh the first index where value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid = 0;

	if (array && size)
	{
		while (1)
		{
			mid = (low + (double)((high) - (low)) / (array[high] - array[low])
					* ((value) - array[low]));

			if (mid > high)
				break;

			printf("Value checked array[%lu] = [%d]\n", (mid), (array)[mid]);

			if (low == high)
				return (array[low] == value ? (int) low : -1);

			if (array[mid] == value)
				return (mid);

			if (array[mid] < value)
				low = mid + 1;
			else
				high = mid - 1;
		}
		printf("Value checked array[%lu] is out of range\n", (mid));
	}
	return (-1);
}
