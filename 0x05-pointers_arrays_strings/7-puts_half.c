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
	int len, i;

	len = strlen(str);

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
}
