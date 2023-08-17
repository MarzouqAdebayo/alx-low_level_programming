#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers to stdout
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Has no return value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");
}
