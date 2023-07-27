#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: Pointer to the string
 */

char *leet(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) == 'a' || *(str + i) == 'a')
		{
			*(str + i) = '4';
		}
		else if (*(str + i) == 'e' || *(str + i) == 'E')
		{
			*(str + i) = '3';
		}
		else if (*(str + i) == 'o' || *(str + i) == 'O')
		{
			*(str + i) = '0';
		}
		else if (*(str + i) == 't' || *(str + i) == 'T')
		{
			*(str + i) = '7';
		}
		else if (*(str + i) == 'l' || *(str + i) == 'L')
		{
			*(str + i) = '1';
		}
	}
	return (str);
}
