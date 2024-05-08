#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array using linear search
 *
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0, j, step = sqrt(size), _size = size;

	if (array == NULL)
		return (-1);
	while (i < _size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (i + step < _size && value > array[i + step])
			i += step;
		else
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + step);
			for (j = i; j <= i + step && j < _size; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (value == array[j])
					return (j);
			}
			return (-1);
		}
	}
	return (-1);
}
