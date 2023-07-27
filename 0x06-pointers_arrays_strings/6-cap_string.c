#include "main.h"

/**
 * cap_string - Capitalized every word
 * @str: Pointer to the string
 *
 * Return: Pointer to the string
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
			{
				str[i] -= 'a' - 'A';
				continue;
			}
			for (j = 0; *(a + j); j++)
			{
				if (*(a + j) == *(str + i - 1))
				{
					str[i] -= 'a' - 'A';
				}
			}
		}
	}

	return (str);
}
