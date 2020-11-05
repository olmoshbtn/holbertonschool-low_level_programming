#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string
 *
 * Return:  the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b != NULL)
	{
		while (*b != '\0')
		{
			if (*b == '0' || *b == '1')
			{
				n = n << 1;
				if (*b == '1')
				{
					n += 1;
				}
				b++;
			}
			else
				return (0);
		}
		return (n);
	}
	return (0);
}
