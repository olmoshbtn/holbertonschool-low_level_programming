#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 * @grid: integer
 * @height: integer
 *
 * Return: pointer to a 2 dimensional array of integers.
 */

void free_grid(int **grid, int height)
{
	int col;

	for (col = 0; col < height; col++)
	{
		free(grid[col]);
	}
	free(grid);
}
