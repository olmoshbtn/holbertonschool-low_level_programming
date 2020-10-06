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
	char *ptrh;
	char *ptrn;

	for ( ; *haystack != '\0'; haystack++)
	{
		ptrh = haystack;/*reseteo el puntero para nueva evaluación */
		ptrn = needle;
		for ( ; *ptrh == *ptrn; ptrh++, ptrn++)
		{
			if (*ptrn == '\0' || *ptrh == '\0')
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}
