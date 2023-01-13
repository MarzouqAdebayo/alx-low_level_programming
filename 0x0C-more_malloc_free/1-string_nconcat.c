#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings up to n-bytes of s2
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 *
 * Return: Pointer to new string s1 + n-s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, j, k, l;

	if (!s1)
		i = 0;
	else
		for (i = 0; s1[i]; i++)
			;
	if (!s2)
		j = 0;
	else
		for (j = 0; s2[j]; j++)
			;

	if (n < j)
		j = n;
	res = malloc(sizeof(*res) * (i + j + 1));
	if (res == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		res[k] = s1[k];
	for (l = 0; l < j; l++)
	{
		res[k] = s2[l];
		k++;
	}

	res[i + j] = '\0';
	return (res);
}
