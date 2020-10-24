#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * pritn_numbers - print numbers
 * @separator: pointer to a string to be printed between numbers
 * @n: number of parameters to print
 * @...: the numbers to print
 *
 * Description: Function prints numbers, separated by separator. followed by a
 * new line. If separator is NULL, it's treated as the empty string.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int remaining = n;

	va_start(arguments, n);

	while (remaining--)
	{
		printf("%d", va_arg(arguments, int));
		if (remaining)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
