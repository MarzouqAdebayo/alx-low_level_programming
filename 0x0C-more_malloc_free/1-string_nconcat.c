#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @@s1: String one
 * @s2: String two
 * @n: number of bytes of s2 to concat
 *
 * Return: pointer to the new string
 *
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, l;

	i = 0;
	j = 0;

	for (; s1[i]; i++)
		;

	for (; s2[j]; j++)
		;

	if (n < j)
		j = n;

	ptr = malloc(sizeof(* ptr) * (i + j + 1));

	if (!ptr)
		return (0);

	for (k = 0; s1[k]; k++)
	{
		ptr[k] = s1[k];
	}
	for (l = 0; l < n; l++, k++)
	{
		ptr[k] = s2[l];
	}

	ptr[k] = '\0';
	return (ptr);
}
