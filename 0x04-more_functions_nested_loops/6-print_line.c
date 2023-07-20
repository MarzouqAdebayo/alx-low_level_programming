#include "main.h"
/**
 * print_line - Body of the function
 * @n: argument to determine how long the line should be
 *
 * Description: Prints line whose length is based on the input
 * Return: has no return value
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

