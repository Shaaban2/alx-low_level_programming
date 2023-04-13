#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid of integers
 * @grid: pointer to the 2-dimensional array
 * @height: number of rows in the grid
 *
 * This function frees the memory allocated
 * to a 2-dimensional grid of integers
 * created by the alloc_grid function
 * The height parameter specifies the number
 * of rows in the grid.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
