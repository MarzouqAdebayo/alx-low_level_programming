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
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
