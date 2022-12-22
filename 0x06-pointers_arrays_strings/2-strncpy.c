#include "main.h"

/**
 * *_strncpy - concatenates the copy of n bytes of the string pointed to
 * by @src to the end of the string pointed to by @dest
 * @dest: String that will be appended to
 * @src: String to be concatenated upon
 * @n: Number of bytes
 *
 * Return: returns poiner to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
