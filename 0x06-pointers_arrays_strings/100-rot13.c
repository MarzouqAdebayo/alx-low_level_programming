#include "main.h"

/**
 * rot13 - encodes a string with rot13 cipher
 * @str: string to be encoded
 *
 * Return: pointer to the string
 */

char *rot13(char *str)
{
	int i, j;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *cipher = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = cipher[j];
				break;
			}
		}
	}

	return (str);
}
