#include "main.h"
/**
 * print_square - Body of the function
 * @n: argument to determine how big the square should be
 *
 * Description: Prints square whose length is based on the input
 * Return: has no return value
 */
void print_square(int n)
{
	int line, i;

	if (n <= 0)
		_putchar('\n');

	for (line = 0; line < n; line++)
	{
		for (i = 0; i < n; i++)
			_putchar('#');
		_putchar('\n');
	}
}

