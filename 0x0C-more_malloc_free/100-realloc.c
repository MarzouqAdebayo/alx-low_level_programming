#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates block of memory
 * @ptr: pointer to the block of memory
 * @old_size: The old size
 * @new_size: The new size
 *
 * Return: pointer to the block of memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old = ptr, *new;
	unsigned int i, max = new_size;

	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	new = malloc(new_size);
	if (!ptr)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		new[i] = old[i];
	free(ptr);
	return (new);
}
