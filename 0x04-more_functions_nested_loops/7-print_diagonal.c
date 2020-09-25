#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n:  number of times the character _ should be printed.
 * Return: Void.
 */

void print_diagonal(int n)
{
int fil;
int col;

for (fil = 0; fil < n; ++fil)
{
for (col = 0; col < fil; ++col)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
