#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) success
 */

int main(void)
{
	int n = 0;
	unsigned long i = 0, j = 1, k;

	while (n < 50)
	{
		printf("%lu", (i + j));
		if (n < 49)
			printf(", ");
		k = i + j;
		i = j;
		j = k;
		n++;
	}
	return (0);
}
