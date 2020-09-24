#include "holberton.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2')
		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
