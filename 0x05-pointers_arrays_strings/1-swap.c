#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer the integer we want to set 42
 * @b: a pointer the integer we want to set 98
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
