#include "holberton.h"

/**
 * flip_bits - determines the number of bits to change one number to another
 * @n: number to compare
 * @m: number to compare
 *
 * Return: number of bits you would need to flip to get
 * from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;
	m = 0;

	while (n)
	{
		m += 1 & n;
		n >>= 1;
	}
	return (m);
}
