#include "main.h"

/**
 * print_positive_number - Body of the function
 * @n: The argument n to be printed
 *
 * Description: Prints numbers using putchar
 * Return: has no return value
 */

void print_positive_number(int n)
{
	if (n < 1)
		return;

	print_positive_number(n / 10);
	_putchar(48 + (n % 10));
}

/**
 * print_number - Body of the function
 * @n: The argument n to be printed
 *
 * Description: Prints numbers using putchar
 * Return: has no return value
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return;
	}

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	print_positive_number(n);
}
