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
	char *str;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i]; i++)
			;
	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; s2[j]; j++)
			;
	str = malloc(sizeof(*str) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i + 1; k++)
		*(str + k) = s1[k];
	for (l = 0; l < j + 1; l++)
	{
		*(str + k) = s2[l];
		k++;
	}
	str[i + j] = '\0';
	return (str);
}
