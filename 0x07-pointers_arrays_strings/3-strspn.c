#include "holberton.h"

/**
 * int _strspn - function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 *
 * Return:  number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (s[i] != accept[j])
				break;
	}
	return (k);
}
