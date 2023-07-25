#include "main.h"
/**
 * _strcpy - Body of the function
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source buffer
 *
 * Description: copies a string pointed to by src to dest
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (&dest[0]);
}
