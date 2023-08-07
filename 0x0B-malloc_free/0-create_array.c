#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: size of the array
 * @c: Character to be initailized in the array
 *
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	char *ptr;

	if (size <= 0)
		return (0);
	arr = malloc(sizeof(*arr) * size);
	ptr = arr;

	if (!arr)
		return (0);
	while (size > 0)
	{
		*arr = c;
		arr++;
		size--;
	}

	return (ptr);
}
