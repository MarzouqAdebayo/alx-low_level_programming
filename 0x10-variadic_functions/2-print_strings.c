#include "variadic_functions.h"

/**
 * print_strings - Prints strings to stdout
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: Has no return value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *word;
	va_list args;

	va_start(args, n);
	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
	{
		word = va_arg(args, char *);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
