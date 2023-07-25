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
	int i, len, t;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len / 2; i++)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
}
