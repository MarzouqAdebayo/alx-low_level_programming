#include "main.h"

/**
 * _memcpy - Body of the function
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Number of bytes
 *
 * Return: Pointer to the destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
