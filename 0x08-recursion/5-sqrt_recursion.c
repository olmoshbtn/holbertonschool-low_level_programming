#include "holberton.h"

/**
 * function - function that returns the natural square root of a number.
 * @i: number integer
 * @n: number integer
 *
 * Return: square root of a number.
 */

int function(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return(function(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number integer
 *
 * Return: square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (function(n, 1));
}
