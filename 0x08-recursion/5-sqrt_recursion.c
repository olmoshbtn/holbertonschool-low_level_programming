#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number integer
 *
 * Return: square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (function(n, 0));
}
/**
 * function - function that returns the natural square root of a number.
 * @i: number integer
 * @n: number integer
 *
 * Return: square root of a number.
 */

int function(int i, int n)
{
        if (i * i > n)
                return (-1);
        else if (i * i == 0)
                return (i);
        else
                return (function(i, (n + 1)));
}
