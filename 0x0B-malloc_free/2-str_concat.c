#include "holberton.h"
#include <stdlib.h>

int _str_len(char *str);

/**
 * str_concat - function concatenate two strings
 * @s1: pointer to a s1 string
 * @s2: pointer to a s2 string
 *
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int len_sum = 0, len_s1, len_s2;
	int i, j;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	else
	{

		len_s1 = _str_len(s1);
		len_s2 = _str_len(s2);
		len_sum = len_s1 + len_s2;

		ptr = (char *) malloc((len_sum + 1) * sizeof(char));

		if (ptr == NULL)
		{
			return (NULL);
		}

		i = 0;
		while (i < len_s1)
		{
			ptr[i] = s1[i];
			i++;
		}

		j = 0;
		while (j < (len_s2 + 1))
		{
			ptr[i + j] = s2[j];
			j++;
		}
		return (ptr);
	}
}

/**
 * _str_len - length of a string
 * @str: pointer
 *
 *
 * Return: return large of a string
 */

int _str_len(char *str)
{

	int len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
