#include "holberton.h"

/**
 * puts_half - unction that prints half of a string, followed by a new line.
 * @str: string...
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (*(str + i) != 0)
	{
		i++;
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = (len - 1) /2; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
