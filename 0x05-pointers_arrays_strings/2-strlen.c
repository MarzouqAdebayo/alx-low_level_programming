#include "main.h"
/**
 * _strlen - Body of the function
 * @s: pointer to string
 *
 * Description: Checks the length of the string
 * Return: counter - length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
