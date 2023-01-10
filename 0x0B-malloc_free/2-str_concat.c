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
	unsigned int len_s1 = 0, len_s2 = 0, i, j;

	if (s1 != NULL)
	{
		while (*(s1 + len_s1))
			len_s1++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + len_s2))
			len_s2++;
	}
	str = malloc(sizeof(*str) * (len_s1 + len_s2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len_s1 + 1; i++)
		*(str + i) = s1[i];
	for (j = 0; j < len_s2 + 1; j++)
	{
		*(str + i) = s2[j];
		i++;
	}
	str[len_s1 + len_s2] = '\0';
	return (str);
}
