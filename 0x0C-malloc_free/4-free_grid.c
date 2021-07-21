#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid made by alloc_grid
 * @grid: 2D array made by alloc_grid to be freed
 * @height: size
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid || height)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
