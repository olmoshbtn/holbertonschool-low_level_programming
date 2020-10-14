#include "holberton.h"
#include <stdlib.h>

int _str_len(char *str);

/**
 * _strdup - returns a pointer to a copy of the string
 * @str: pointer
 *
 *
 * Return: pointer to the duplicated string. NULL if insufficient memory
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = _str_len(str);
		ptr = (char *) malloc((len + 1) * sizeof(char));

		if (ptr == NULL)
		{
			return (NULL);
		}
		while (i < len)
		{
			ptr[i] = str[i];
			i++;
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
