#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: number of arguements in the program
 * @argv: pointer to string of argument
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
