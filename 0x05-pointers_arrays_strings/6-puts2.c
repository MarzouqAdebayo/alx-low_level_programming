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
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
