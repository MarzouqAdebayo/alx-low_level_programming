#include "main.h"
/**
 * puts2 - Body of the function
 * @str: pointer to string
 *
 * Description: Prints a string to stdout
 * Return: has no return value
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
