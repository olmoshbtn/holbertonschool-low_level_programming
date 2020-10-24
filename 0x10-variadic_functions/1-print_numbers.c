#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * pritn_numbers - function that prints numbers, followed by a new line.
 * @separator: pointer to a string to be printed between numbers
 * @n: number of parameters
 * @...: unamed parameters
 *
 * Return: 0 if n == 0, otherwise the sum of all parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int remaining = n;

	va_start(arguments, n);
	for ( ; remaining; remaining--)
	{
		printf("%d", va_arg(arguments, unsigned int));
		if (remaining != 1)
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(arguments);
	}
}
