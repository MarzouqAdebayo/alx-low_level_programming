#include "main.h"

/**
 * *_strncat - concatenates n byte from the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 * @n: number of byte to copy
 *
 * Return: returns poiner to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
