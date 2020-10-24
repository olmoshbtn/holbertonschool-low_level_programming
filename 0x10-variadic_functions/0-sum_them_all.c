#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters
 * @...: unamed parameters
 *
 * Return: 0 if n == 0, otherwise the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int sum = 0, remaining = n;

	va_start(arguments, n);

	while (remaining--)
		sum += va_arg(arguments, unsigned int);

	va_end(arguments);

	return (sum);
}
