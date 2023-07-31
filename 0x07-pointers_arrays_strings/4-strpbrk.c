#include "main.h"

/**
 * _strpbrk - Body of the function
 * @s: Pointer to the string s
 * @accept: Pointer to the string accept
 *
 * Return: integer i
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}
