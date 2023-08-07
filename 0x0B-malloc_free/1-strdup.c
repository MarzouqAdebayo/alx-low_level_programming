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
	char *new;
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; *(str + i); i++)
		;
	i++;
	new = malloc(sizeof(*new) * i);

	if (!new)
		return (0);
	i = 0;
	while (*(str + i))
	{
		*(new + i) = *(str + i);
		i++;
	}
	*(new + i) = '\0';
	return (new);
}
