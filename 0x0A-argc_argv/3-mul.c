#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to the arguments
 *
 * Return: 0 if argc <= 2, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i = 1, mul = 1;

	if (argc != 3)
	{
		return printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		mul *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", mul);
	return (0);
}
