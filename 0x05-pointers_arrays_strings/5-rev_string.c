#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * @s: string
 *
 * Return: Alway 0.
 */

void rev_string(char *s)
{
	char *psz = s;
	int swp;

	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (s > psz)
	{
		swp = *s;
		*s = *psz;
		*psz = swp;
		s--;
		psz++;
	}
}
