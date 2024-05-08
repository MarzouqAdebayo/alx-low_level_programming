#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array using binary search
 *
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int mid = (size - 1) / 2, left = 0, right = size - 1, i;

	if (!array)
		return (-1);
	while (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		putchar('\n');
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
		mid = left + ((right - left) / 2);
	}
	return (-1);
}
