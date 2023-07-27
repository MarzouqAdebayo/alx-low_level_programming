#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @str: Pointer to the string
 *
 * Return: Pointer to the string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'A')
		{
			str[i] -= 'a' - 'A';
		}
	}

	return (str);
}
