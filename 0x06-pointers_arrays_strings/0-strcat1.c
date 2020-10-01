#include "holberton.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer dest
 * @src: pointer src
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*start)
	{
		start++;
	}

	*start = *src;

	while (*src)
	{
		*start = *src;
		start++;
		src++;
	}
	return (dest);
}
