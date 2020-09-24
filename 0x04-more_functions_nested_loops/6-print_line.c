#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n:  number of times the character _ should be printed.
 * Return: Void.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; n >= 1; n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
