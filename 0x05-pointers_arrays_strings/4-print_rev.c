#include "main.h"
/**
 * _print_rev - Body of the function
 * @str: pointer to string
 *
 * Description: Prints a string in reverse to stdout
 * Return: has no return value
 */
void print_rev(char *str)
{
	int counter;

	while (*str != '\0')
	{
		str++;
		counter++;
	}

	while (counter > 0)
	{
		str--;
		_putchar(*str);
		counter--;
	}
	_putchar('\n');
}
