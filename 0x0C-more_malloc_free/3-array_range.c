#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: number
 * @max: number
 *
 * Return: f min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i, elements;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	elements = max - min + 1;
	ptr = (int *) malloc(elements * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= elements; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
