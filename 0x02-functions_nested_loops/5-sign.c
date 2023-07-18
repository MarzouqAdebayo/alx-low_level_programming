#include "main.h"
/**
 * print_sign - Contains full body of the function
 * @n: The characer to be checked
 *
 * Description: Checks if a number is positive or negative and prints its signs
 * Return: + if n is positive, - if n is negative and 0 if n is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('-');
	return (-1);
}

