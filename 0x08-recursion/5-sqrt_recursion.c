#include "main.h"

/**
 * multiply - multiplies a number by itself and checks it
 * @i: number
 * @num: The number whose sqrt is to be found
 *
 * Return: int, sqaure root or -1
 */

int multiply(int i, int num)
{
	if (i * i == num)
		return (i);
	if (i * i > num)
		return (-1);
	return (multiply(i + 1, num));
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
	return (multiply(1, n));
}
