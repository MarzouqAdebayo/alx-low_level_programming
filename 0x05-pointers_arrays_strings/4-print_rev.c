#include "main.h"
/**
 * print_rev - Body of the function
 * @s: pointer to string
 *
 * Description: Prints a string to stdout in reverse
 * Return: has no return value
 */

void print_rev(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
		;

	len--;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
