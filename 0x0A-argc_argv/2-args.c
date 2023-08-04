#include "main.h"

/**
 * main - prints arguments passed into cl
 * @argc: number of arguments
 * @argv: pointer to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
