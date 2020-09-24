#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: number
 * Return: void
 */
void print_to_98(int n)
{
if (n >= 98)
{
for ( ; n > 98; n--)
printf("%d, ", n);
printf("%d\n", n);
}
else
{
for ( ; n < 98; n++)
printf("%d, ", n);
printf("%d\n", n);
}
}
