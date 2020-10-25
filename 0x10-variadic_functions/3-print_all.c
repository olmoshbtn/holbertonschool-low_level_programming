#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - function that print a char
 * @args: va_list with the entry argument
 *
 * Return: doesn't have a return, it's void.
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - function that print an integer
 * @args: va_list with the entry argument
 *
 * Return: doesn't have a return, it's void.
 */

void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - function that print a float
 * @args: va_list with the entry argument
 *
 * Return: doesn't have a return, it's void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_str - function that prints a str
 * @args: va_list with the entry arguments
 *
 * Return: doesn't have a return, it's void.
 */

void print_str(va_list args)
{
	const char *str = va_arg(args, const char *);

	printf(str == NULL ? "(nil)" : "%s", str);
}

/**
 * print_all - function that print anything
 * @format: format of the input arguments
 * @...: arguments to print
 *
 * Return: doesn't have a return, it's void.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, k;
	op_fn_t fn_list[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		k = 0;
		while (fn_list[k].print_fn != '\0')
		{
			if (*(fn_list[k].print_fn) == format[i])
			{
				fn_list[k].fn(args);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			k++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
