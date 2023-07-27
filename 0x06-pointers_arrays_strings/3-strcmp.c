#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: Pointer to string one
 * @s2: Pointer to string two
 *
 * Return: return 0 if same and 1 otherwise
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			return *(const unsigned char *)s1 - *(const unsigned char *)s2;
		}
		s1++;
		s2++;
	}
	return (0);
}
