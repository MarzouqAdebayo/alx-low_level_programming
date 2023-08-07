#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fress memory allocated to a 2d array
 * @grid: array
 * @height: array rows
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
