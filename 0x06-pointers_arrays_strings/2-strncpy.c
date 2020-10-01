#include "holberton.h"

/**
 * _strncpy - function that copies a string.
 *
 *
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lgsrc = 0;
	int i = 0;

	for (i = 0; src[i] != 0; i++)
	{
		lgsrc++;
	}
	if (lgsrc > n)
	{
		for (i = 0; i <= n; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			dest[i] = src[i];
		}
		for (i = 0; lgsrc - n > 0; i--)
		{
			dest[i] = ('\0');
		}
	}
	return (dest);
}
