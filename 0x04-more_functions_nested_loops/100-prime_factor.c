#include "main.h"

/**
 * print_largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number
 *
 * Return: int - Largest prime factor of a number
*/

void print_largest_prime_factor(unsigned long long n)
{
	int i = 2;
	while (n > 1)
	{
		if (n % i == 0)
			n /= i;
		else
			i += 1;
	}
	printf("%lu", i);
}
