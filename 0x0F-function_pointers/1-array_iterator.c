#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element of
 *                  an array
 * @array: elements of an array
 * @size: size of an array
 * @action: pointer a function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
