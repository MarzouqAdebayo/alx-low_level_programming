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
	int counter;
	char ch;

	i = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}

	while (counter >= 0)
	{
		ch = s[i];
		_putchar(ch);
		--counter;
	}
	_putchar('\n');
}
