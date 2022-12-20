#include "main.h"
/**
 * print_rev - Body of the function
 * @str: pointer to string
 *
 * Description: Prints a string in reverse to stdout
 * Return: has no return value
 */
void print_rev(char *str)
{
	int i;
	char ch;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		ch = s[i];
		_putchar(ch);
		--i;
	}
	_putchar('\n');
}
