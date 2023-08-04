#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers
 * @argc: number of arguments
 * @argv: pointer to the arguments
 *
 * Return: 0 if error and 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	i = 1;
	while (i < argc)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				continue;
			puts("Error");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
