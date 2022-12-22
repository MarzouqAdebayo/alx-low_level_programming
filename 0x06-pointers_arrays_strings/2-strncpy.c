#include "main.h"

/**
 * *_strncpy - concatenates the copy of n bytes of the string pointed to
 * by @src to the end of the string pointed to by @dest
 * @dest: String that will be appended to
 * @src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;
	char *cutpoint = &dest[n];

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
			len++;
		}
	}
	return (dest);
}
