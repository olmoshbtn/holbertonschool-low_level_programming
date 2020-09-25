#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size:  is the number of the suquare _ should be printed.
 * Return: Void.
 */

void print_square(int size)
{
int i;
int n;

for (i = 0; i < size; i++)
{
for (n = 0; n < size; n++)
_putchar(35);
_putchar('\n');
}

if (size <= 0)
_putchar('\n');
}
