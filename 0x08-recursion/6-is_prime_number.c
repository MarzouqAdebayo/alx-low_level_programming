#include "main.h"

/**
 * divide - divides a number by an int and checks it
 * @i: number
 * @num: The number to be checked
 *
 * Return: int, 0 or 1
 */

int divide(int i, int num)
{
	if (i == 1)
		return (1);
	if (num % i == 0)
		return (0);
	return (divide(i - 1, num));
}

/**
 * is_prime_number - Checks if a number is prime or not
 * @n: number to be checked if prime or not
 *
 * Return: int, 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (divide((n + 1) / 2, n));
}
