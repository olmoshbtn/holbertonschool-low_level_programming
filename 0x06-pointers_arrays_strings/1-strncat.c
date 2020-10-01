#include "holberton.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer dest
 * @src: pointer src
 * @n: integer
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *end = dest;

	while (*end)
	{
		end++;
	}

	*end = *src;

	while (0 < n && *src != 0)
	{
		*end = *src;
		end++;
		src++;
		n--;
	}
	return (dest);
}
