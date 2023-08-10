#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to the address allocated
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
