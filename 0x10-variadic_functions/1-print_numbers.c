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
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
