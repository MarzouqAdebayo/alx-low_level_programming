#include "main.h"
#include <string.h>
/**
 * puts_half - Body of the function
 * @str: pointer to string
 *
 * Description: Prints half of a string to stdout
 * Return: has no return value
 */

void puts_half(char *str)
{
	int len, i, start;

	len = strlen(str);

	if (len % 2 != 0)
		start = (len - 1) / 2 + 1;
	else
		start = len / 2;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
