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

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int remaining = n;
	const char *ptr = NULL;

	if (separator != NULL)
	{
		va_start(arguments, n);
		for ( ; remaining; remaining--)
/**		while (remaining--)*/
		{
			ptr = va_arg(arguments, const char *);
			printf("%s", ptr ? ptr : "(nil)");
			if (remaining != 1)
			{
				printf("%s", separator);
			}
			va_end(arguments);
		}
		printf("\n");
	}
}
