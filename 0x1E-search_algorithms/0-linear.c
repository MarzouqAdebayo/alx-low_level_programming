#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search
 *
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
