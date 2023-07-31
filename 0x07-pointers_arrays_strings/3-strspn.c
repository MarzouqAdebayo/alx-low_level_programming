#include "main.h"

/**
 * _strspn - Body of the function
 * @s: Pointer to the string s
 * @accept: Pointer to the string accept
 *
 * Return: integer i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
