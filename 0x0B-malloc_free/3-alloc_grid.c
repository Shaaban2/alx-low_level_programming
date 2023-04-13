#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two-dimensional array of integers
 * with the given width and height.
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: On success, returns a pointer to the allocated 2D array of integers.
 * On failure, returns NULL.
 */

int **alloc_grid(int width, int height)
{
	int **outgrid;
	int m, k;

	if (width < 1 || height < 1)
		return (NULL);

	outgrid = malloc(height * sizeof(int *));
	if (outgrid == NULL)
	{
		free(outgrid);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		outgrid[m] = malloc(width * sizeof(int));
		if (outgrid[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(outgrid[m]);
			free(outgrid);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
		for (k = 0; k < width; k++)
			outgrid[m][k] = 0;

	return (outgrid);
}
