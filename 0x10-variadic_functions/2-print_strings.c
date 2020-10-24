#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string
 * @separator: pointer to a string to be printed between strings
 * @n: number of parameters to print
 * @...: strings parameters to print
 *
 * Description: function print strings, separated by a separator, followed by
 * a new line. If separator is NULL, it's treated as empty string; if string is
 * NULL, print "(nil)" instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int remaining = n;
	const char *ptr = NULL;


	va_start(arguments, n);
	if (!separator)
		separator = "";
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
