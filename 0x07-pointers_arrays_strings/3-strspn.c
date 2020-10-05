#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 *
 * Return:  number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] != accept[j])
				break;
	}
	return (i);
}
