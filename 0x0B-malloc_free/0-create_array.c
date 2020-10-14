#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - array of chars, and initializes it with a specific char.
 * @size: length of input
 * @c: specific char to initializes
 *
 * Return: pointer to the array, or NULL if it fails or 0
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
