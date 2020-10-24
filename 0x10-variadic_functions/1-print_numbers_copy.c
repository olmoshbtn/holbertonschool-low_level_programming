#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * pritn_numbers -
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

	if (separator != NULL)
	{
		va_start(arguments, n);
		while (remaining--)
		{
			printf("%d", va_arg(arguments, unsigned int));
			if (remaining)
			{
				printf("%s", separator);
			}
			printf("\n");
			va_end(arguments);
		}
	}
	return;
}
