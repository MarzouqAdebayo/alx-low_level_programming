#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) success
 */

int main(void)
{
	unsigned long i = 0, j = 1, k, sum;

	while (k < 4000000)
	{
		k = i + j;
		sum += k;
		i = j;
		j = k;
	}
	printf("%lu\n", sum);
	return (0);
}
