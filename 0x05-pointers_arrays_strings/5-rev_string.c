#include "main.h"
/**
 * rev_string - Body of the function
 * @s: pointer to string
 *
 * Description: Reverses a string in memory
 * Return: has no return value
 */

void rev_string(char *s)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
		;

	char temp[i];

	i--;
	k = i;

	for (j = 0; j <= k; j++, i--)
	{

		temp[j] = s[i];
	}
	temp[j] = '\0';
	s = temp;
}
