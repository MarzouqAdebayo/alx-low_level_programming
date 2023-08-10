#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of in from min to max
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the array
*/

int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return (0);
	j = max - min + 1;
	ptr = malloc(sizeof(*ptr) * j);
	if (!ptr)
		return (0);
	for (i = 0; min <= max; i++, min++)
		*(ptr + i) = min;
	return (ptr);
}
