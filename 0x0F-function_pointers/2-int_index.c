#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array of an integers
 * @size: number of elements of an array
 * @cmp: pointer to a function that compare values
 *
 * Return: the index of the first element for which the cmp function does not
 *         return 0. If no element matches or if size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if ( size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
		return (i);
		}
	}
	return (-1);
}
