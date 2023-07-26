#include "main.h"

/**
 * _strncat - Body of the function
 * @dest: The destination string
 * @src: The source string
 * @n: number of characters to concatenate
 *
 * Description: Concatenates two strings
 * Return: Returns a pointer to the character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0' && (j < n))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (&dest[0]);
}
