#include "variadic_functions.h"

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
	unsigned int remaining;

	va_start(arguments, n);

	if (!separator)
		separator = "";
	for (remaining = 0; remaining < n; remaining++)
	{
		printf("%d", va_arg(arguments, int));

		if (remaining != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
