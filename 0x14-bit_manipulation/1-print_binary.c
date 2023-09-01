#include "main.h"

/**
 * print_binary - Print the binary representation of an integer
 * @n: number to be printed
 *
 * Return: has no return value
*/

void print_binary(unsigned long int n)
{
	int num_bits, i;
	unsigned long int mask;

	if (n == 0)
	{
		printf("0");
		return;
	}
	num_bits = sizeof(n) * 8;
	for (i = num_bits - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n & mask)
			printf("1");
		else
			printf("0");
	}
}
