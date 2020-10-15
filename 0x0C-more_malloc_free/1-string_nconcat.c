#include "holberton.h"
#include <stdlib.h>

unsigned int _str_len(char *str);

/**
 * string_nconcat - pointer to a newly allocated space in memory
 * @s1: pointer to string s1
 * @s2: pointer to string s2
 * @n: length to add a s1
 *
 * Return: NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2;
	unsigned int count, count1;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = _str_len(s1);
	len_s2 = _str_len(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}

	ptr = malloc((sizeof(char) * len_s1) + (sizeof(char) * n) + 1);

	if (ptr != NULL)
	{
		for (count = 0; count < len_s1; count++)
		{
			ptr[count] = s1[count];
		}
		for (count1 = 0; count1 < n; count1++)
		{
			ptr[count] = s2[count1];
			count++;
		}
		ptr[count] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}

/**
 * _str_len - length of a string
 * @str: pointer
 *
 *
 * Return: return large of a string
 */

unsigned int _str_len(char *str)
{

	unsigned int len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
