#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: String one
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

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	if (n < j)
		j = n;

	ptr = malloc(sizeof(*ptr) * (i + j + 1));

	if (ptr == NULL)
		return (0);

	if (s1 != NULL)
	{
		for (k = 0; k < i; k++)
		{
			ptr[k] = s1[k];
		}
	} else
		k = 0;
	if (s2 != NULL)
	{
		for (l = 0; l < j; l++, k++)
		{
			ptr[k] = s2[l];
		}
	}

	ptr[k] = '\0';
	return (ptr);
}
