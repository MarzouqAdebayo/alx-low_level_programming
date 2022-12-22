#include "main.h"

/**
 * *cap_string - capitalizes all words in a string
 * @str: string to capitalize
 *
 * Return: address of str
 */

char *cap_string(char *str)
{
	int i, j;
	char a[] = " \t\n,;.!?\"(){}";

	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				str[i] -= 'a' - 'A';
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (a[j] == str[i - 1])
						str[i] -= 'a' - 'A';
				}
			}
		}
	}

	return (str);
}
