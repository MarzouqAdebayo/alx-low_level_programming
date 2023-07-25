#include "main.h"
#include <string.h>
/**
 * puts2 - Body of the function
 * @str: pointer to string
 *
 * Description: Prints a string to stdout
 * Return: has no return value
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
