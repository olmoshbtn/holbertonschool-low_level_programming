#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 *
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = *a;
}
