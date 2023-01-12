#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocaties memeory using malloc
 * @b: an integer param
 *
 * Return: pointer to newly created memory space
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
