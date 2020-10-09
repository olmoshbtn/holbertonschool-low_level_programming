#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string s1
 * @s2: string s2
 *
 * Return: 0 if strings are equals, otherwise strings are differents
 */

int _strcmp(char *s1, char *s2)
{
	int res;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		res = s1[i] - s2[i];
		if (res != 0)
		{
			break;
		}
	}
	return (res);
}
