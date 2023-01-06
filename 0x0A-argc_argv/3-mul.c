#include <stdio.h>
#include <stdlib.h>

/**
 * main - mlultiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to the arguments
 *
 * Return: 0 if argc <= 2, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i])
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	return (1);
}
