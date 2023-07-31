#include "main.h"

/**
 * _memset - Body of the function
 * @s: Pointer to the string
 * @b: Character to fill mem with
 * @n: Number of bytes
 *
 * Return: Pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
