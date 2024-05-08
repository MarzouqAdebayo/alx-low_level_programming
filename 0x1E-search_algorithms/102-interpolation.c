#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array
 * using interpolation search
 *
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			high = pos + 1;
		else
			return (pos);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
	printf("Value checked array[%d] is out of range\n", (int)(pos));
	return (-1);
	return (-1);
}
