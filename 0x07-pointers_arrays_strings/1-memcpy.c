#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: pointer
 * @src: pointer
 * @n: unsigned int
 *
 * Return: a pointe to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
