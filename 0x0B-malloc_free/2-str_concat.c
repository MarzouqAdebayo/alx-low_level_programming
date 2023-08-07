#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Creates an array of characters
 * @s1: String s1
 * @s2: String to be concatenated to s1
 *
 * Return: Pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, k, l, m;

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

	k = i + j + 1;

	new = malloc(sizeof(*new) * k);
	if (new == NULL)
		return (0);
	for (l = 0; l < i; l++)
		*(new + l) = *(s1 + l);
	for (m = 0; m < j; m++, l++)
		*(new + l) = *(s2 + m);
	return (new);
}
