#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer
 * @c: char
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i++])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
