#include "main.h"
/**
 * _strlen - Body of the function
 * @s: pointer to string
 *
 * Description: Checks the length of the string
 * Return: counter - length of the string
 */
void _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
