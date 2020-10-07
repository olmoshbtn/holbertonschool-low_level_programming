#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: integer
 *
 * Return: result as integer
 */
int factorial(int n)
{
	if (n <= 0)
	{
		if  (n == 0)
			return (1);
		else
			return (-1);
	}
	return (n * factorial(n - 1));
}
