#include "main.h"
/**
 * print_triangle - Body of the function
 * @n: argument to determine how big the square should be
 *
 * Description: Prints square whose length is based on the input
 * Return: has no return value
 */
void print_triangle(int n)
{
	int line, i, j;

	if (n <= 0)
		_putchar('\n');
	for (line = 0; line < n; line++)
	{
		for (i = 0; i < n - line - 1; i++)
			_putchar(' ');
		for (j = 0; j < line + 1; j++)
			_putchar('#');
		_putchar('\n');
	}
}
