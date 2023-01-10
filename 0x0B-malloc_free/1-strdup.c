#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Creates an array of characters
 * @str: String to be copied
 *
 * B
 * Return: Pointer to the new string
 */

char *_strdup(char *str)
{
	char *str_cpy;
	unsigned int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		i++;
	i++;
	str_cpy = malloc(sizeof(*str) * i);
	if (str_cpy == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		*(str_cpy + j) = str[j];
	return (str_cpy);
}
