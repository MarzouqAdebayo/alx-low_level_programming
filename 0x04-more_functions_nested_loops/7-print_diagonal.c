#include "main.h"
/**
 * print_diagonal - Body of the function
 * @n: argument to determine how long the diagonal should be
 *
 * Description: Prints diagonal whose length is based on the input
 * Return: has no return value
 */
void print_diagonal(int n)
{
	int line, i;

	if (n <= 0)
		_putchar('\n');

	for (line = 0; line < n; line++)
	{
		for (i = 0; i < line; i++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}

