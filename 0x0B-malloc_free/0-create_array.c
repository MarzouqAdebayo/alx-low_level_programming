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
	char *s;
	unsigned int i;

	s = malloc(sizeof(*s) * size);
	if (size == 0 || s == NULL)
		return (0);
	for (i = 0; i < size; i++)
		*(s + i) = c;
	return (s);
}
