#include "holberton.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 *
 * @size: size of the triangle
 *
 * Return: Void.
 */

void print_triangle(int size)
{
	int fil;
	int col;
	int count = size;

	for (fil = 1; fil <= size; ++fil)
	{
		for (col = 1; col <= size; col++)
		{
			if (col >= count)
			{
				_putchar('#');
			}
			else
			{
			_putchar(' ');
			}
		}
		count--;
		_putchar('\n');
	}
}
