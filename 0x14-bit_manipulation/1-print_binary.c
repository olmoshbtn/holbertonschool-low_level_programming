#include "holberton.h"

/**
 * print_binary - returns the value of a bit at a given index.
 * @n: number pased to be convted to binary
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
