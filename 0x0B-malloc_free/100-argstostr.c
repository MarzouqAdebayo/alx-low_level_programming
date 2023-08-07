#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * @ac:length of the arguments
 * @av:pointer to array of strings
 *
 * Return:pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *new;
	int i, j, k, length = 0, temp;

	if (ac == 0 || av == NULL)
		return (0);

	i = 0;
	while (i < ac)
	{
		length += strlen(av[i]);
		length++;
		i++;
	}
	new = malloc(sizeof(*new) * length);
	if (!new)
		return (0);
	for (j = 0, i = 0; i < ac; j++, i++)
	{
		temp = strlen(av[i]);
		for (k = 0; k < temp; k++, j++)
			*(new + j) = av[i][k];
		*(new + j) = '\n';
	}
	return (new);
}
