#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates and array of integer from min to max
 * @min: min element parameter
 * @max: max element param
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;

	ptr = malloc(j * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
		ptr[i] = min;
	return (ptr);
}
