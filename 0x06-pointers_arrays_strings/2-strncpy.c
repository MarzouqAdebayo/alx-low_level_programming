#include "main.h"

/**
 * _strncpy - Body of the function
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to be copied
 *
 * Description: Copies src string to dest buffer
 * Return: Returns a pointer to the character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
