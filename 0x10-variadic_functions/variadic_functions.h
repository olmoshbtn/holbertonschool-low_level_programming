#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_fn - a format spec associated with a print function
 * @print_fn: the format specifier
 * @fn: the print function
 *
 */
typedef struct print_fn
{
	char *print_fn;
	void (*fn)(va_list fn_list);
} op_fn_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H */
