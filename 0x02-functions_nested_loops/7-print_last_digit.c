#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @r: no olvidar
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int lastD;

	lastD = r % 10;
	if (lastD < 0)
	{
		lastD = lastD * -1;
	}
	return (lastD);
}
