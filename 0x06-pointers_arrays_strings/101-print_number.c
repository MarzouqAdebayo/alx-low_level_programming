#include "main.h"

/**
 * num_print - recursively prints numbers using putchar
 * @n: integer to be printed
 *
 * Return: has no return value
*/

void num_print(unsigned int n)
{
	if (n < 1)
		return;

	num_print(n / 10);
	_putchar('0' + (n % 10));
}

/**
 * print_number - Prints a number ot stdout
 * @n: The number to be printed
 *
 * Return: has no return value
*/

void print_number(int n)
{
	int sign = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		sign *= -1;
		_putchar('-');
		n *= -1;
	}

	num_print(n);
}
