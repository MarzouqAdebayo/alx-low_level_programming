#include "main.h"

/**
 * _strncpy - Body of the function
 * @dest: The destination string
 * @src: The source string
 * @n: number of characters to copy
 *
 * Description: Copies src string to dest buffer
 * Return: Returns a pointer to the character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (&dest[0]);
}
