#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int e;

	for (e = 0; e < 10 ; e++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
