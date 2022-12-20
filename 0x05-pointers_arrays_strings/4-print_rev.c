#include "main.h"
/**
 * print_rev - Body of the function
 * @s: pointer to string
 *
 * Description: Prints a string in reverse to stdout
 * Return: has no return value
 */
void print_rev(char *s)
{
	int i;
	char ch;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		ch = s[i];
		_putchar(ch);
		--i;
	}
	_putchar('\n');
}
