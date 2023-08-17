#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*d)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	d = get_op_func(argv[2]);

	if (d == NULL)
	{
		puts("Error");
		exit(99);
	}
	c = d(a, b);
	printf("%d\n", c);

	return (0);
}
