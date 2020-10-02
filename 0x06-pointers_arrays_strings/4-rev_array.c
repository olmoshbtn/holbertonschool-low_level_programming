#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array a
 * @n: integer
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, change;

	for (i = 0; i < n/2; i++)
	{
		change = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = change;
	}
}
