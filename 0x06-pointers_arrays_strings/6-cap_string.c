#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @str: Pointer to the string
 *
 * Return: pointer to the string
*/

char *string_toupper(char *str)
{
	int i;
	char arr[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= (97 + 26))
		{
			str[i] = arr[str[i] % 97];
		}
	}

	return (str);
}
