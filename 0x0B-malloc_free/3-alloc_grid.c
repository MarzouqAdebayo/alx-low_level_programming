#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a two dimensional array
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **array_2d, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2d = malloc(sizeof(int *) * height);
	if (array_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array_2d[i] = malloc(sizeof(int) * width);
		if (!array_2d[i])
		{
			for (j = 0; j <= i, j++)
				free(array_2d[j]);
			free(array_2d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array_2d[i][j] = 0;
	}
	return (array_2d);
}
