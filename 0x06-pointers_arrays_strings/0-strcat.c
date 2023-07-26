#include "main.h"

/**
 * _strcat - Body of the function
 * @dest: The destination string
 * @src: The source string
 *
 * Description: Concatenates two strings
 * Return: Returns a pointer to the character
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[0] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (&dest[0]);
}
