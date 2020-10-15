#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - return a pointer to the allocates memory
 * @b: unsigned integer
 *
 * Return: normal process termination status value 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
