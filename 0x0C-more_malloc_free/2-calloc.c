#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: the number of elements of an array
 * @size: the number of bytes of an array
 *
 *
 * Return: NULL if nmemb or size is 0, if fails NULL,
 * otherwise a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
