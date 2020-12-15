#include "holberton.h"

/**
 *_strpbrk - function locates the first occurrence in the string s
 * @s: pointer
 * @accept: pointer
 *
 * Return:  number of bytes in the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
