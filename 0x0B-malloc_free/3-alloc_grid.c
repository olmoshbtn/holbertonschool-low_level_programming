#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers
 * @width: integer
 * @height: integer
 *
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int col;
	int **ptr_h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr_h = (int **) malloc(height * sizeof(int *));

	if (ptr_h == NULL)
	{
		free(ptr_h);
		return (NULL);
	}
	for (col = 0; col < height; col++)
	{
		ptr_h[col] = (int *) malloc(width * sizeof(int));

		if (ptr_h[col] == NULL)
		{
			for ((col = col - 1); col >= 0; col--)
			{
				free(ptr_h[col]);
			}
			free(ptr_h);
			return (NULL);
		}
	}
	return (ptr_h);
}
