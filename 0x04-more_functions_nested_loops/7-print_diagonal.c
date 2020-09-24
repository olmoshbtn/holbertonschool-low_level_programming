#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n:  number of times the character _ should be printed.
 * Return: Void.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(92);
		for (; n >= 1; n--)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
