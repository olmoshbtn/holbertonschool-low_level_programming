#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size:  is the number of the suquare _ should be printed.
 * Return: Void.
 */

void print_square(int size)
{
  int i;
  int e;

  for (e = 0; e < size ; e++)
    {
      for (i = 0; i < size; i++)
	{
	  _putchar('#');
	}
      _putchar('\n');
    }
}
