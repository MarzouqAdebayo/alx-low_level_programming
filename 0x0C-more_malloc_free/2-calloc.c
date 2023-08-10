#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory and initializes it
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the new memory location
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = 0;
	return (ptr);
}
