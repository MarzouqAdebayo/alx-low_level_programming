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
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	num_bits = sizeof(n) * 8;
	for (i = num_bits - 1; i >= 0; i--)
	{
		mask = 1 << i;
		if (n & mask) {
			flag = 1;
			printf("1");
		}
		else
		{
			if (flag)
				printf("0");
		}
	}
}
