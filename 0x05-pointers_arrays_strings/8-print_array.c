#include <stdio.h>
#include "holberton.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer
 * @n: integer
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d", a[i]);
		printf(", ");
		i++;
	}
	printf("%d\n", a[i]);
}
