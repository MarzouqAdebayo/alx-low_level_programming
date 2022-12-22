#include "main.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @str: string to change
 *
 * Return: address of str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
	}

	return (str);
}
