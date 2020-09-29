#include "holberton.h"

/**
 * print_rev - func. that prints a string, in reverse, followed by a new line
 * @s: string
 *
 * Return: Alway 0.
 */

void print_rev(char *s)
{
	char *psz = s;

	while (*s != '\0')
	{
		s++;
	}
	while (s >= psz)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
