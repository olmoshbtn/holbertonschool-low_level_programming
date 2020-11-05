#include "holberton.h"

/**
 * binary_to_uint -
 * @b:
 *
 *
 *
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
				if(*b == '1')
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
