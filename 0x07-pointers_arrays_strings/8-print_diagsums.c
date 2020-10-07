#include "holberton.h"
#include <math.h>
#include <stdio.h>

/**
 * print_diagsums - function prints sum of the two diagonals (square matrix int)
 * @a: pointer
 * @size: size of the matrix
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int row;
	int *loc;
	int sumd1 = 0;
	int sumd2 = 0;

	for (loc = a, row = 0; row < size; ++row, loc += size + 1)
	{
		sumd1 += *loc;
	}

	for (loc = a + size - 1, row = 0; row < size; ++row, loc += size - 1)
	{
		sumd2 += *loc;
	}
	printf("%d, %d\n", sumd1, sumd2);
}
