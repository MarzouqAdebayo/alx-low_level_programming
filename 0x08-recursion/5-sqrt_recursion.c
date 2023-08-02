#include "main.h"

/**
 * multiply - multiplies a number by itself and checks it
 * @n: The number whose sqrt is to be found
 * @i: number
 *
 * Return: int, sqaure root or -1
 */

int multiply(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (multiply(n, (i + 1)));
}

/**
 * _sqrt_recursion - Checks for the sqrt of a number
 * @n: number whose sqrt is to be found
 *
 * Return: sqrt of n or 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (multiply(n, 1));
}
