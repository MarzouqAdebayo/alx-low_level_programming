#include "main.h"

/**
 * _strchr - Body of the function
 * @s: Pointer to string s
 * @c: character
 *
 * Return: pointer to s address
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((s + i));
		i++;
	}
	return (NULL);
}
