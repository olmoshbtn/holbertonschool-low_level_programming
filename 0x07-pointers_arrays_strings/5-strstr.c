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
	char *pk;
	char *pn;

	for ( ; *haystack != '\0'; haystack++)
	{
		pk = haystack;
		pn = needle;

		for ( ; *pk == *pn; pk++, pn++)
		{
			if (*pn == '\0')
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}
