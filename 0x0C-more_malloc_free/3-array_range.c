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
	int *ptr, i;

	if (min > max)
		return (0);
	if (min == 0 && max == 0)
		return (0);
	ptr = malloc(sizeof(int *) * (max - min + 1));
	if (!ptr)
		return (0);
	for (i = min; i <= max; i++)
		*(ptr + i - min) = i;
	return (ptr);
}
