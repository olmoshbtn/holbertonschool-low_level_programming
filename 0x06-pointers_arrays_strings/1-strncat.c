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
	int src_len;
	int i;
	char *end;

	end = dest;
	src_len = 0;
       	while (*end)
	{
		src_len++;
		end++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[src_len + i] = src[i];
	}

	dest[src_len + i] = '\0';

	return (dest);
}
