#include "holberton.h"

/**
 * _strstr - function finds the first occurrence of the substring needle in the
 *           string haystack
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: pointer to the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *pk, *pn;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		pk = haystack;
		pn = needle;

		while (*pk == *pn)
		{
			if (*pn == '\0')
			{
				return (haystack);
			}
			pk++;
			pn++;
		}
		haystack++;
	}
	return ('\0');
}
