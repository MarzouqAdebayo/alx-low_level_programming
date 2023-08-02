#include "main.h"

/**
 * check_prime - Cheeks if a number is prime
 * @n: number to be checked
 * @i: number
 *
 * Return: 1 if prime and 0 otherwise
*/

int check_prime(int n, int i)
{
	if (i <= 1)
		return (1);
	if ((n % i) == 0)
		return (0);
	return check_prime(n, (i - 1));
}

/**
 * is_prime_number - Checks if a number is prime or not
 * @n: number to be checked if prime or not
 *
 * Return: int, 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return check_prime(n, n / 2);
}
