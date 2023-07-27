#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: Pointer to the string
 */

char *leet(char *str)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *replacement = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacement[j];
				break;
			}
		}
	}

	return (str);
}
