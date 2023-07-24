#include "main.h"
/**
 * _puts - Body of the function
 * @str: pointer to string
 *
 * Description: Prints a string to stdout
 * Return: has no return value
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
